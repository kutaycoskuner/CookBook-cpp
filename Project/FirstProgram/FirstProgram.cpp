// # ==== Precursor Directives ====
#include <iostream>
#include <string>
#include <random> // for std::mt19937
#include <ctime> // for std::time
#include <array>
#include "basic.h"
#include "constants.h"
#include <utility> // for std::sort
//#include "debugger.h"
//#include "plog/Log.h" // Step 1: include the logger header

// # ==== Only Read When Debugging Initializator Example ====
//# define ENABLE_DEBUG // comment out to disable debugging
//#ifdef ENABLE_DEBUG
//std::cerr << "This section called" << whatever;
//#endif

// # ==== Question ====
//
// Simplified BlackJack

// # ==== Namespaces ====
//

// # ==== Enumerators ====
//
enum CardType
{
	CARD_TYPE_CLUBS,
	CARD_TYPE_DIAMONDS,
	CARD_TYPE_HEARTS,
	CARD_TYPE_SPADES,
	CARD_TYPE_MAX
};
enum CardRank
{
	CARD_RANK_2,
	CARD_RANK_3,
	CARD_RANK_4,
	CARD_RANK_5,
	CARD_RANK_6,
	CARD_RANK_7,
	CARD_RANK_8,
	CARD_RANK_9,
	CARD_RANK_10,
	CARD_RANK_JACK,
	CARD_RANK_QUEEN,
	CARD_RANK_KING,
	CARD_RANK_ACE,
	CARD_RANK_MAX
};

// # ==== Structs ====
//
struct Card
{
	CardType suit;
	CardRank rank;
};

// # ==== Temporary Functions ====
//
void printCard(const Card& card)
{
	switch (card.rank)
	{
	case CARD_RANK_2: std::cout << '2'; break;
	case CARD_RANK_3: std::cout << '3'; break;
	case CARD_RANK_4: std::cout << '4'; break;
	case CARD_RANK_5: std::cout << '5'; break;
	case CARD_RANK_6: std::cout << '6'; break;
	case CARD_RANK_7: std::cout << '7'; break;
	case CARD_RANK_8: std::cout << '8'; break;
	case CARD_RANK_9: std::cout << '9'; break;
	case CARD_RANK_10: std::cout << 'T'; break;
	case CARD_RANK_JACK: std::cout << 'J'; break;
	case CARD_RANK_QUEEN: std::cout << 'Q'; break;
	case CARD_RANK_KING: std::cout << 'K'; break;
	case CARD_RANK_ACE: std::cout << 'A'; break;
	};

	switch (card.suit)
	{
	case CARD_TYPE_CLUBS: std::cout << 'C'; break;
	case CARD_TYPE_DIAMONDS: std::cout << 'D'; break;
	case CARD_TYPE_HEARTS: std::cout << 'H'; break;
	case CARD_TYPE_SPADES: std::cout << 'S'; break;
	};
}

void printCard(const std::array<Card, 52> &deck)
{
	for (const auto& card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}
	std::cout << '\n';
}

void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}

long getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<long>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card,52> &deck)
{
	for (int iii=0; iii < 52; ++iii)
	{
		int jjj = getRandomNumber(0,51);
		swapCard(deck[iii], deck[jjj]);
	}
}

int getCardValue(Card card)
{
	switch (card.rank)
	{
	case CARD_RANK_2: return 2;
	case CARD_RANK_3: return 3;
	case CARD_RANK_4: return 4;
	case CARD_RANK_5: return 5;
	case CARD_RANK_6: return 6;
	case CARD_RANK_7: return 7;
	case CARD_RANK_8: return 8;
	case CARD_RANK_9: return 9;
	case CARD_RANK_10: return 10;
	case CARD_RANK_JACK: return 10;
	case CARD_RANK_QUEEN: return 10;
	case CARD_RANK_KING: return 10;
	case CARD_RANK_ACE: return 11;
	default: return 0;
	};
}

char getPlayerChoice()
{
	std::cout << "(h) to hit, or (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'h' && choice != 's');

	return choice;
}

bool playBlackJack(std::array<Card,52> &deck)
{
	const Card* cardPtr = &deck[0];
	int dealerScore{0};
	int playerScore{0};
	std::cout << "\nWelcome to BlackJack! \n";
	int counter = 0;



	// Deal the dealer one card
	dealerScore += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerScore << '\n';

	// Deal the player two cards
	playerScore += getCardValue(*cardPtr++);
	playerScore += getCardValue(*cardPtr++);

	// Player goes first
	while (true) // infinite loop (until we break or return)
	{
		std::cout << "You have: " << playerScore << '\n';

		// See if the player has busted
		if (playerScore > 21)
			return false;

		char choice = getPlayerChoice();
		if (choice == 's')
			break;

		playerScore += getCardValue(*cardPtr++);
	}

	// If player hasn't busted, dealer goes until he has at least 17 points
	while (dealerScore < 17)
	{
		dealerScore += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerScore << '\n';
	}

	// If dealer busted, player wins
	if (dealerScore > 21)
		return true;

	return (playerScore > dealerScore);
}

// # ==== Main ====
//
int main()
{
	// Start Main
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value

	//Card deck[4][13]{};
	std::array<Card, 52> deck;

	int counter = 0;

	for (int suit = 0; suit < CARD_TYPE_MAX; ++suit)
	{
		for (int rank = 0; rank < CARD_RANK_MAX; ++rank)
		{
			deck[counter].suit = static_cast<CardType>(suit);
			deck[counter].rank = static_cast<CardRank>(rank);
			++counter;
		}
	}

	printCard(deck);

	std::cout << "\n";

	shuffleDeck(deck);
	
	printCard(deck);

	if (playBlackJack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";

	// Return
	return 0;
}

// # ==== Precursor Directives ====
#include <iostream>
#include <string>
#include <random> // for std::mt19937
#include <ctime> // for std::time
#include "basic.h"
#include "constants.h"
//#include "debugger.h"
//#include "plog/Log.h" // Step 1: include the logger header

// # ==== Only Read When Debugging Initializator Example ====
//# define ENABLE_DEBUG // comment out to disable debugging
//#ifdef ENABLE_DEBUG
//std::cerr << "This section called" << whatever;
//#endif

// # ==== Question ====
//
//Implement a game of hi - lo.First, your program should pick a random integer between 1 an
//d 100. The user is given 7 tries to guess the number.
//
//If the user does not guess the correct number, the program should tell them whether they 
//guessed too high or too low.If the user guesses the right number, the program should tell
//them they won.If they run out of guesses, the program should tell them they lost, and wha
//t the correct number is.At the end of the game, the user should be asked if they want to 
//play again.If the user doesn’t enter ‘y’ or ‘n’, ask them again.
//
//Note: You do not need to implement error handling for the user’s guess.

// # ==== Namespaces ====
//
namespace MyRandom
{
	// Initialize our mersenne twister with a random seed based on the clock (once at system startup)
	std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
}

// # ==== Enumerators ====
//

// # ==== Structs ====
//

// # ==== Temporary Functions ====
//
int getRandomNumber(int min, int max)
{
	std::uniform_int_distribution<> die(min, max); // we can create a distribution in any function that needs it
	return die(MyRandom::mersenne); // and then generate a random number from our global generator
}


void guessGame()
{
	int guess{};
	int selectedNumber = getRandomNumber(1, 100);
	std::cout << "Welcome to high-low game. I am thinking a number you have 7 tries to guess what it is. \n";
	for (short iii = 0; iii < 8; ++iii)
	{
		if (iii < 7)
		{
			while (1) // loop until user enters valid input
			{
				std::cout << "Guess #" << iii + 1 << "\n";
				std::cin >> guess;

				if (std::cin.fail()) // has a previous extraction failed?
				{
					// yep, so let's handle the failure
					std::cout << "Adam gibi sayi gir yarak. \n";
					std::cin.clear(); // put us back in 'normal' operation mode
					std::cin.ignore(32767, '\n'); // and remove the bad input
				}
				else
				{
					std::cin.ignore(32767, '\n'); // remove any extraneous input
					break;
				}
			}

			if (guess > selectedNumber)
			{
				std::cout << "Your guess is high. \n";
				continue;
			}
			else if (guess < selectedNumber)
			{
				std::cout << "Your guess is low. \n";
				continue;
			}
			else
			{
				std::cout << "Congratulations! You have won. \n";
				break;
			}
		}
		else
		{
			std::cout << "Sorry, you lose. The correct answer was " << selectedNumber << "\n";
		}

	}
}

bool playAgain()
{
	while (1)
	{
		char answer{};
		std::cout << "Would you like to play again? [y/n]\n";
		std::cin >> answer;
		if (answer == 'n')
		{
			std::cout << "Thank you for playing! \n";
			return 0;
		}
		else if (answer == 'y')
		{
			return 1;
		}
		else
		{
			std::cout << "Wrong entry please try [y/n] \n";
			continue;
		}
	}
}

// # ==== Main ====
//
int main()
{
	// Start Main
	do
	{
		guessGame();
	} while (playAgain());




	// Return
	return 0;
}

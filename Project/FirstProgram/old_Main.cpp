//// ==== 6-9a Dynamic Memory Allocation and Sorting ====
//// # ==== Question ====
////
//// // # ==== Question ====
////
////Write a program that :
////*Asks the user how many names they wish to enter.
////* Asks the user to enter each name.
////* Calls a function to sort the names(modify the selection sort code from lesson 6.4 --Sorting an array using selection sort)
////* Prints the sorted list of names.
////
//// Hint : Use a dynamic array of std::string to hold the names.
////	Hint : std::string supports comparing strings via the comparison operators <and >
////
////	Your output should match this :
////
////	How many names would you like to enter ? 5
////	Enter name #1: Jason
////	Enter name #2: Mark
////	Enter name #3: Alex
////	Enter name #4: Chris
////	Enter name #5: John
////
////	Here is your sorted list :
////Name #1: Alex
////Name #2: Chris
////Name #3: Jason
////Name #4: John
////Name #5: Mark
//
//// # ==== Namespaces ====
////
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//void sortArray(std::string* array, int length)
//{
//	// ==== Sorting array ====
//	for (int jjj = 0; jjj < length - 1;++jjj)
//	{
//		// Testing if value greater than static j while i is changing
//		for (int iii = jjj + 1; iii < length; ++iii)
//		{
//			// if it is greater swapping those two elements
//			if (array[jjj] > array[iii])
//			{
//				std::swap(array[jjj], array[iii]);
//			}
//		}
//	}
//}
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	std::cout << "How many names would you like to enter? "; // ttt
//	int length;
//	std::cin >> length;
//
//	std::string* nameList = new std::string[length]; // use array new.  Note that length does not need to be constant!
//
//	for (int iii = 0; iii < length; ++iii)
//	{
//		std::cout << "Enter name #" << iii + 1 << "\n";
//		std::cin >> nameList[iii];
//	}
//
//	sortArray(nameList, length);
//
//	for (int iii = 0; iii < length; ++iii)
//		std::cout << nameList[iii] << "\n";
//
//	delete[] nameList;
//
//
//
//	// Return
//	return 0;
//}

//// # ==== Orth: Prime Finder ====
//// # ==== Question ====
////
//// Prime Finder
//
//// # ==== Namespaces ====
////
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	const int whichPrime = 1000; // Kacinci Prime Lazim?
//	bool primeTest{ true };
//	long primeArray[whichPrime] = { 2,3,5,7 };
//	long num = 10;
//
//	for (int iii = 4; iii < whichPrime; ++num)
//	{
//		primeTest = true;
//
//		for (int jjj = 2; jjj < num / 2; ++jjj)
//		{
//			if (num % jjj == 0)
//			{
//				primeTest = false;
//				break;
//			}
//		}
//
//		if (primeTest)
//		{
//			primeArray[iii] = num;
//			++iii;
//		}
//	}
//
//	for (int iii = 0; iii < whichPrime; ++iii)
//	{
//		std::cout << iii + 1 << "- " << primeArray[iii] << "\n";
//	}
//	// Return
//	return 0;
//}

//// # ==== Bubble Sort ====
//// # ==== Question ====
////
////Another simple sort is called “bubble sort”.Bubble sort works by comparing adjacent pairs of elements, 
////and swapping them if the criteria is met, so that elements “bubble” to the end of the array.Although 
////there are quite a few ways to optimize bubble sort, in this quiz we’ll stick with the unoptimized vers
////ion here because it’s simplest.
////
////Unoptimized bubble sort performs the following steps to sort an array from smallest to largest :
////A) Compare array element 0 with array element 1. If element 0 is larger, swap it with element 1.
////B) Now do the same for elements 1 and 2, and every subsequent pair of elements until you hit the end o
////f the array.At this point, the last element in the array will be sorted.
////C) Repeat the first two steps again until the array is sorted.
//
//// # ==== Namespaces ====
////
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	int array[] = { 30, 50, 20, 10, 40 };
//
//	for (int swapped = 1; swapped > 0;)
//	{
//		swapped = 0;
//		for (int iii = 0; iii < std::size(array) - 1; ++iii)
//		{
//			if (array[iii] > array[iii + 1])
//			{
//				array[iii] = array[iii] + array[iii + 1];
//				array[iii + 1] = array[iii] - array[iii + 1];
//				array[iii] = array[iii] - array[iii + 1];
//				++swapped;
//			}
//		}
//	}
//
//	for (int iii = 0; iii < std::size(array); ++iii)
//	{
//		std::cout << array[iii] << " ";
//	}
//
//	//std::cout << "Please enter number: " << "\n";
//	//int x{};
//	//while (1)
//	//{
//	//	std::cin >> x;
//	//	if (std::cin.fail())
//	//	{
//	//		std::cout << "Invalid Entry. Please enter an integer. " << "\n";
//	//		std::cin.clear();
//	//		std::cin.ignore(32767, '\n');
//	//	}
//	//	else
//	//	{
//	//		break;
//	//	}
//	//}
//	//int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
//	///*std::cout << std::size(array);*/
//
//	//for (int iii = 0; iii < std::size(array); ++iii)
//	//{
//	//	std::cout << array[iii] << " ";
//	//}
//
//	//int index{};
//	//for (int iii= 0; iii < std::size(array); ++iii)
//	//{
//	//	if (x == array[iii])
//	//	{
//	//		index = iii;
//	//		break;
//	//	}
//	//}
//
//	//std::cout << "\nIndex of your entry is: " << index << "\n";
//
//
//
//	//if (__cplusplus == 201703L) std::cout << "C++17\n";
//	//else if (__cplusplus == 201402L) std::cout << "C++14\n";
//	//else if (__cplusplus == 201103L) std::cout << "C++11\n";
//	//else if (__cplusplus == 199711L) std::cout << "C++98\n";
//	//else std::cout << "pre-standard C++\n";
//
//
//
//
//	// Return
//	return 0;
//}

//// # ==== 5.x ====
//
//// # ==== Question ====
////
////Implement a game of hi - lo.First, your program should pick a random integer between 1 an
////d 100. The user is given 7 tries to guess the number.
////
////If the user does not guess the correct number, the program should tell them whether they 
////guessed too high or too low.If the user guesses the right number, the program should tell
////them they won.If they run out of guesses, the program should tell them they lost, and wha
////t the correct number is.At the end of the game, the user should be asked if they want to 
////play again.If the user doesn’t enter ‘y’ or ‘n’, ask them again.
////
////Note: You do not need to implement error handling for the user’s guess.
//
//// # ==== Namespaces ====
////
//namespace MyRandom
//{
//	// Initialize our mersenne twister with a random seed based on the clock (once at system startup)
//	std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
//}
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//int getRandomNumber(int min, int max)
//{
//	std::uniform_int_distribution<> die(min, max); // we can create a distribution in any function that needs it
//	return die(MyRandom::mersenne); // and then generate a random number from our global generator
//}
//
//
//void guessGame()
//{
//	int guess{};
//	int selectedNumber = getRandomNumber(1, 100);
//	std::cout << "Welcome to high-low game. I am thinking a number you have 7 tries to guess what it is. \n";
//	for (short iii = 0; iii < 8; ++iii)
//	{
//		if (iii < 7)
//		{
//			while (1) // loop until user enters valid input
//			{
//				std::cout << "Guess #" << iii + 1 << "\n";
//				std::cin >> guess;
//
//				if (std::cin.fail()) // has a previous extraction failed?
//				{
//					// yep, so let's handle the failure
//					std::cout << "Adam gibi sayi gir yarak. \n";
//					std::cin.clear(); // put us back in 'normal' operation mode
//					std::cin.ignore(32767, '\n'); // and remove the bad input
//				}
//				else
//				{
//					std::cin.ignore(32767, '\n'); // remove any extraneous input
//					break;
//				}
//			}
//
//			if (guess > selectedNumber)
//			{
//				std::cout << "Your guess is high. \n";
//				continue;
//			}
//			else if (guess < selectedNumber)
//			{
//				std::cout << "Your guess is low. \n";
//				continue;
//			}
//			else
//			{
//				std::cout << "Congratulations! You have won. \n";
//				break;
//			}
//		}
//		else
//		{
//			std::cout << "Sorry, you lose. The correct answer was " << selectedNumber << "\n";
//		}
//
//	}
//}
//
//bool playAgain()
//{
//	while (1)
//	{
//		char answer{};
//		std::cout << "Would you like to play again? [y/n]\n";
//		std::cin >> answer;
//		if (answer == 'n')
//		{
//			std::cout << "Thank you for playing! \n";
//			return 0;
//		}
//		else if (answer == 'y')
//		{
//			return 1;
//		}
//		else
//		{
//			std::cout << "Wrong entry please try [y/n] \n";
//			continue;
//		}
//	}
//}
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	do
//	{
//		guessGame();
//	} while (playAgain());
//
//
//
//
//	// Return
//	return 0;
//}

//// # ==== 5.7 Q ====
//// # ==== Precursor Directives ====
//#include <iostream>
//#include <string>
//#include "basic.h"
//#include "constants.h"
////#include "debugger.h"
////#include "plog/Log.h" // Step 1: include the logger header
//
//// # ==== Only Read When Debugging Initializator Example ====
////# define ENABLE_DEBUG // comment out to disable debugging
////#ifdef ENABLE_DEBUG
////std::cerr << "This section called" << whatever;
////#endif
//
//// # ==== Question ====
////
//// Write a for loop that prints every even number from 0 to 20.
////
//// Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//int sumTo(int var)
//{
//	int sum{};
//	for (int iii = 1; var >= iii; iii++)
//	{
//		sum += iii;
//	}
//	return sum;
//}
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	for (int i = 0; i <= 20; i++)
//	{
//		if (i % 2 == 0)
//		{
//			std::cout << i << "\n";
//		}
//	}
//	//
//	int test{};
//	std::cout << "Enter Nummer" << "\n";
//	std::cin >> test;
//	std::cout << "sum to one value is [without function]: " << (test * (test + 1)) / 2 << "\n";
//	std::cout << "sum to one value is: " << sumTo(test);
//
//
//
//	// Return
//	return 0;
//}

////// # ==== 5.6 Q ====
//// # ==== Precursor Directives ====
//#include <iostream>
//#include <string>
//#include "basic.h"
//#include "constants.h"
////#include "debugger.h"
////#include "plog/Log.h" // Step 1: include the logger header
//
//// # ==== Only Read When Debugging Initializator Example ====
////# define ENABLE_DEBUG // comment out to disable debugging
////#ifdef ENABLE_DEBUG
////std::cerr << "This section called" << whatever;
////#endif
//
//// # ==== Question ====
////
////        1
////		2 1
////	  3 2 1
////	4 3 2 1
////5 4 3 2 1
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	int outer = 5;
//	int increment = 1;
//	while (outer >= 1)
//	{
//		// loop between 1 and outer
//		int inner = outer;
//		while (inner >= 1)
//		{
//			std::cout << "  ";
//			--inner;
//		}
//		inner = increment;
//		while (inner >= 1)
//		{
//			std::cout << inner << " ";
//			--inner;
//		}
//		// print a newline at the end of each row
//		std::cout << "\n";
//		--outer;
//		++increment;
//	};
//
//	// Return
//	return 0;
//}

//// # ==== 5.5 Q2 [Success] ====
//// # ==== Precursor Directives ====
//#include <iostream>
//#include <string>
//#include "basic.h"
//#include "constants.h"
////#include "debugger.h"
////#include "plog/Log.h" // Step 1: include the logger header
//
//// # ==== Only Read When Debugging Initializator Example ====
////# define ENABLE_DEBUG // comment out to disable debugging
////#ifdef ENABLE_DEBUG
////std::cerr << "This section called" << whatever;
////#endif
//
//// # ==== Question ====
////
////Write a program that prints out the letters a through z along with their ASCII codes.Hint
////	: to print characters as integers, you have to use a static_cast.
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	char i = 'a';
//	while (static_cast<int>(i) <= static_cast<int>('z'))
//	{
//		std::cout << "Letter " << i << " has the ASCII code: " << static_cast<int>(i) << "\n";
//		++i;
//	}
//
//	// Return
//	return 0;
//}

//// # ==== 5.3 Q2 ====
//// # ==== Question ====
////
////Define an enum (or enum class, if using a C++11 capable compiler) named Animal that con
////tains the following animals : pig, chicken, goat, cat, dog, ostrich.Write a function na
////med getAnimalName() that takes an Animal parameterand uses a switch statement to return
//// the name for that animal as a std::string.Write another function named printNumberOfLe
////gs() that uses a switch statement to print the number of legs each animal walks on.Make
//// sure both functions have a default case that prints an error message.Call printNumberO
//// fLegs() from main() with a cat and a chicken.Your output should look like this:
////A cat has 4 legs.
////A chicken has 2 legs.
//
//// # ==== Enumerators ====
////
//enum class Animal
//{
//	PIG,
//	CHICKEN,
//	GOAT,
//	CAT,
//	DOG,
//	OSTRICH
//};
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//std::string getAnimalName(Animal animal)
//{
//	switch (animal)
//	{
//	case Animal::PIG:
//		return "pig";
//	case Animal::CHICKEN:
//		return "chicken";
//	case Animal::GOAT:
//		return "goat";
//	case Animal::CAT:
//		return "cat";
//	case Animal::DOG:
//		return "dog";
//	case Animal::OSTRICH:
//		return "ostrich";
//	default:
//		return " given animal is not recognized ";
//	}
//}
//
//short getAnimalLegCount(Animal animal)
//{
//	switch (animal)
//	{
//	case Animal::PIG:
//	case Animal::GOAT:
//	case Animal::CAT:
//	case Animal::DOG:
//		return 4;
//	case Animal::CHICKEN:
//	case Animal::OSTRICH:
//		return 2;
//	default:
//		return 0;
//	}
//}
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	Animal variable = Animal::CHICKEN;
//
//	std::cout << "A " << getAnimalName(variable) << " has " << getAnimalLegCount(variable) << " legs. \n";
//
//	// Return
//	return 0;
//}

//// # ==== 5.3 Q1 ====
//// # ==== Question ====
////
////Write a function called calculate() that takes two integersand a char representing one 
////of the following mathematical operations : +, -, *, / , or % (modulus).Use a switch st
////atement to perform the appropriate mathematical operation on the integers, and return 
////the result.If an invalid operator is passed into the function, the function should pri
////nt an error.For the division operator, do an integer division.
//
//// # ==== Enumerators ====
////
//
//// # ==== Structs ====
////
//
//// # ==== Temporary Functions ====
////
//int calculate(int int1, int int2, char op)
//{
//	int i{};
//	switch (op)
//	{
//	case '+':
//		i = int1 + int2;
//		break;
//	case '-':
//		i = int1 - int2;
//		break;
//	case '*':
//		i = int1 * int2;
//		break;
//	case '/':
//		i = int1 / int2;
//		break;
//	default:
//		std::cout << "invalid operator" << "\n";
//		return 0;
//		break;
//	}
//	return i;
//}
//
//// # ==== Main ====
////
//int main()
//{
//	// Start Main
//	std::cout << "Enter an integer: ";
//	int x;
//	std::cin >> x;
//
//	std::cout << "Enter another integer: ";
//	int y;
//	std::cin >> y;
//
//	std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
//	char op;
//	std::cin >> op;
//
//	std::cout << x << " " << op << " " << y << " = " << calculate(x, y, op) << "\n";
//
//	// Return
//	return 0;
//}

//// # ==== S.4.x Final ====
//// # ==== Question ====
////
////In designing a game, we decide we want to have monsters, because everyone lik
////es fighting monsters.Declare a struct that represents your monster.The monste
////r should have a type that can be one of the following : an ogre, a dragon, an
////orc, a giant spider, or a slime.If you’re using C++11, use an enum class for 
////this.If you’re using an older compiler, use an enumeration for this.
////
////Each individual monster should also have a name(use a std::string), as well a
////s an amount of health that represents how much damage they can take before th
////ey die.Write a function named printMonster() that prints out all of the struc
////t’s members.Instantiate an ogreand a slime, initialize them using an initiali
////zer list, and pass them to printMonster().
////
////Your program should produce the following output :
////
////This Ogre is named Torgand has 145 health.
////This Slime is named Blurp and has 23 health.
//
//// # ==== Enumerators ====
////
//enum class MonsterType
//{
//	OGRE
//	, DRAGON
//	, ORC
//	, GIANT_SPIDER
//	, SLIME
//};
//
//// # ==== Structs ====
////
//struct Monster
//{
//	// Type
//	MonsterType taxonomy;
//	// Name
//	std::string name;
//	// Health
//	double health;
//};
//
//// # ==== Temporary Functions ====
////
//std::string getMonsterTypeString(Monster var)
//{
//	if (var.taxonomy == MonsterType::OGRE)
//		return "Ogre";
//	if (var.taxonomy == MonsterType::DRAGON)
//		return "Dragon";
//	if (var.taxonomy == MonsterType::ORC)
//		return "Orc";
//	if (var.taxonomy == MonsterType::GIANT_SPIDER)
//		return "Giant Spider";
//	if (var.taxonomy == MonsterType::SLIME)
//		return "Slime";
//
//	return "Unknown";
//}
//
//void printMonster(Monster var)
//{
//	std::cout << "This " << getMonsterTypeString(var) << " is called " << var.name << " and has " << var.health << " health. \n";
//}
//
//// # ==== Main ====
//
//int main()
//{
//	// Start Main
//	Monster ogre = { MonsterType::OGRE, "Torg", 145 };
//	Monster slime = { MonsterType::SLIME, "Blurp", 23 };
//	Monster dragon = { MonsterType::DRAGON, "Frige", 453 };
//
//	printMonster(ogre);
//	printMonster(slime);
//	printMonster(dragon);
//
//	// Return
//	return 0;
//}

//// # ==== S.4.8 Q2 ====
//// # ==== Structs ====
////
//struct Fraction
//{
//	int numerator;
//	int denominator;
//};
//
//// # ==== Temporary Functions ====
////
//Fraction getFraction()
//{
//	Fraction var;
//	std::cout << "Please enter an numerator \n";
//	std::cin >> var.numerator;
//	std::cout << "Please enter an denominator \n";
//	std::cin >> var.denominator;
//	return var;
//}
//
//void multiplyFractions(Fraction var1, Fraction var2)
//{
//	std::cout << "Multiplication of two fractions is : " << static_cast<float>(var1.numerator * var2.numerator) / (var1.denominator * var2.denominator);
//}
//
//
//// # ==== Question ====
////
////Create a struct to hold a fraction. The struct should have an integer numerat
///*or and an integer denominator member. Declare 2 fraction variables and read t
//hem in from the user. Write a function called multiply that takes both fracti
//ons, multiplies them together, and prints the result out as a decimal number.
//You do not need to reduce the fraction to its lowest terms*/
//
//// # ==== Main ====
//
//int main()
//{
//	// Start Main
//	Fraction first = getFraction();
//	Fraction second = getFraction();
//
//	multiplyFractions(first, second);
//
//	// Return
//	return 0;
//}

//// # ==== S.4.8 Q1 ====
//// # ==== Structs ====
////
//struct Advertising
//{
//	short numberOfAds;
//	double clickPercentage;
//	double averageIncomePerAd;
//};
//
//// # ==== Temporary Functions ====
////
//Advertising getAdvertising()
//{
//	Advertising var;
//	std::cout << "Enter The Number of Ads " << "\n";
//	std::cin >> var.numberOfAds;
//	std::cout << "Enter The click percentage  " << "\n";
//	std::cin >> var.clickPercentage;
//	std::cout << "Enter average income per add " << "\n";
//	std::cin >> var.averageIncomePerAd;
//	return var;
//}
//
//void printAd(Advertising var)
//{
//	std::cout << "Number of ads Shown: " << var.numberOfAds << "\n";
//	std::cout << "Ads click percentage: " << var.clickPercentage << "\n";
//	std::cout << "Average income per ad: " << var.averageIncomePerAd << "\n";
//
//	std::cout << "Total Earninngs : " << (var.numberOfAds * var.clickPercentage * var.averageIncomePerAd) << "$" << "\n";
//}
//
//
//// # ==== Question ====
////
////You are running a website, and you are trying to keep track of how much money
////you make per day from advertising.Declare an advertising struct that keeps tr
////ack of how many ads you’ve shown to readers, what percentage of ads were clic
////ked on by users, and how much you earned on average from each ad that was cli
////cked.Read in values for each of these fields from the user.Pass the advertisi
////ng struct to a function that prints each of the values, and then calculates h
////ow much you made for that day(multiply all 3 fields together).
//
//// # ==== Main ====
//
//int main()
//{
//	// Start Main
//	Advertising ad = getAdvertising();
//	printAd(ad);
//
//
//	// Return
//	return 0;
//}

//// # ==== 4.x Quiz Fall Second Calculator ====
//// # ==== Temporary Functions ====
//double askForHeight()
//{
//	std::cout << "Please enter height: " << "\n";
//	double i{};
//	std::cin >> i;
//	return i;
//}
//
//// # ==== Main ====
//int main()
//{
//	// Start Main
//	double height{ askForHeight() };
//	double currentHeight{ height };
//	int secondPassed{ 0 };
//
//	for (height; currentHeight > 0; secondPassed++)
//	{
//		currentHeight = height - (myConstants::gravity * (secondPassed * secondPassed) / 2);
//		if (currentHeight > 0)
//		{
//			std::cout << "At " << secondPassed << "seconds, the ball is at height: " << currentHeight << "\n";
//		}
//		else
//		{
//			std::cout << "At " << secondPassed << "seconds, the ball is on the ground ";
//		}
//	}
//
//	// Return
//	return 0;
//}

//// # ==== Temporary Functions ====
//double askForValue()
//{
//	std::cout << "Enter a double value: " << "\n";
//	double i{};
//	std::cin >> i;
//	return i;
//}
//char askForOperator()
//{
//	std::cout << "Enter an operator: " << "\n";
//	char i{};
//	std::cin >> i;
//	if (i == '+' || i == '-' || i == '*' || i == '/')
//	{
//		return i;
//	}
//	else
//	{
//		return 0;
//	}
//}
//// # ==== Main ====
//int main()
//{
//	// Start Main
//	double i{ askForValue() };
//	double y{ askForValue() };
//	char op{ askForOperator() };
//	if (op == '+')
//	{
//		std::cout << i + y;
//	}
//	else if (op == '-')
//	{
//		std::cout << i - y;
//	}
//	else if (op == '*')
//	{
//		std::cout << i * y;
//	}
//	else if (op == '/')
//	{
//		std::cout << i / y;
//	}
//	else
//	{
//		std::cout << "";
//	}
//	// Return
//	return 0;
//}

	// # ==== Sizeof Function ==== 
	//sizeOfData();

	// # ==== Debugger Quiz ====
	//int x{ readNumber() };
	//x = x + readNumber();
	//writeAnswer(x);

	// # ==== Quiz 1,2,3 ====
	/*int i = { readNumber() };
	int y = { readNumber() };
	writeNumber(i+y);*/

	// # ==== Basic Functions Usage ====
	//
	/*helloWorld();
	inputOutput();
	std::cout << "double of your number is " << getValueFromUser() * 2 << '\n';*/

	// # ==== Function Test ====
	//// - Require tryout_function()
	//tryout_function();

	// # ==== Function Return Values ====
	// - require getValueFromUser()
	/*int num{ getValueFromUser() };
	std::cout << num << " double is : " << num * 2 << '\n';
	return 0;*/

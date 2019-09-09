// # ==== Precursor Directives ====
#include <iostream>
#include <string>
#include <random> // for std::mt19937
#include <ctime> // for std::time
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
// // # ==== Question ====
//
//Write a program that :
//*Asks the user how many names they wish to enter.
//* Asks the user to enter each name.
//* Calls a function to sort the names(modify the selection sort code from lesson 6.4 --Sorting an array using selection sort)
//* Prints the sorted list of names.
//
// Hint : Use a dynamic array of std::string to hold the names.
//	Hint : std::string supports comparing strings via the comparison operators <and >
//
//	Your output should match this :
//
//	How many names would you like to enter ? 5
//	Enter name #1: Jason
//	Enter name #2: Mark
//	Enter name #3: Alex
//	Enter name #4: Chris
//	Enter name #5: John
//
//	Here is your sorted list :
//Name #1: Alex
//Name #2: Chris
//Name #3: Jason
//Name #4: John
//Name #5: Mark

// # ==== Namespaces ====
//

// # ==== Enumerators ====
//

// # ==== Structs ====
//

// # ==== Temporary Functions ====
//
void sortArray(std::string *array, int length)
{
	// ==== Sorting array ====
	for (int jjj = 0; jjj < length-1;++jjj)
	{
		// Testing if value greater than static j while i is changing
		for (int iii = jjj+1; iii < length; ++iii)
		{
			// if it is greater swapping those two elements
			if (array[jjj] > array[iii])
			{
				std::swap(array[jjj], array[iii]);
			}
		}
	}
}

// # ==== Main ====
//
int main()
{
	// Start Main
	std::cout << "How many names would you like to enter? "; // ttt
	int length;
	std::cin >> length;

	std::string *nameList = new std::string[length]; // use array new.  Note that length does not need to be constant!

	for (int iii = 0; iii < length; ++iii)
	{
		std::cout << "Enter name #" << iii+1 << "\n";
		std::cin >> nameList[iii];
	}

	sortArray(nameList, length);

	for (int iii = 0; iii < length; ++iii)
		std::cout << nameList[iii] << "\n";

	delete[] nameList;



	// Return
	return 0;
}

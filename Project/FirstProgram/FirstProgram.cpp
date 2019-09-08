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
// Prime Finder

// # ==== Namespaces ====
//

// # ==== Enumerators ====
//

// # ==== Structs ====
//

// # ==== Temporary Functions ====
//

// # ==== Main ====
//
int main()
{
	// Start Main
	const int whichPrime = 1000; // Kacinci Prime Lazim?
	bool primeTest{ true };
	long primeArray[whichPrime] = {2,3,5,7};
	long num = 10;

	for (int iii = 4; iii < whichPrime; ++num)
	{
		primeTest = true;

		for (int jjj = 2; jjj < num/2; ++jjj)
		{
			if (num % jjj == 0)
			{
				primeTest = false;
				break;
			}
		}

		if (primeTest)
		{
			primeArray[iii] = num;
			++iii;
		}
	}

	for (int iii = 0; iii < whichPrime; ++iii)
	{
		std::cout << iii+1 << "- " << primeArray[iii] << "\n";
	}
	// Return
	return 0;
}

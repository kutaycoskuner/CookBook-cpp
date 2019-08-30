#include <iostream>
#include "basic_Functions.h"

// # ==== Forward Declarations ====
//
//void helloWorld();
//int inputOutput();
//int getValueFromUser();

// # ==== Main ====
int main()
{
	// # ==== Basic Functions Usage ====
	//
	/*helloWorld();
	inputOutput();
	std::cout << "double of your number is " << getValueFromUser() * 2 << '\n';*/

	// # ==== Quiz 1,2,3 ====
	int i = { readNumber() };
	int y = { readNumber() };
	writeNumber(i+y);

	// Return
	return 0;
}



	// # ==== Function Test ====
	//// - Require tryout_function()
	//tryout_function();

	// # ==== Function Return Values ====
	// - require getValueFromUser()
	/*int num{ getValueFromUser() };

	std::cout << num << " double is : " << num * 2 << '\n';
	return 0;*/

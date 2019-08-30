#include <iostream>

// # ==== Forward Declarations ====
void helloWorld();
int inputOutput();
int getValueFromUser();

// # ==== Main ====
int main()
{
	helloWorld();
	inputOutput();
	std::cout << "double of your number is " << getValueFromUser() * 2 << '\n';
}



	// # ==== Function Test ====
	//// - Require tryout_function()
	//tryout_function();

	// # ==== Function Return Values ====
	// - require getValueFromUser()
	/*int num{ getValueFromUser() };

	std::cout << num << " double is : " << num * 2 << '\n';
	return 0;*/

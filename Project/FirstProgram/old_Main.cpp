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

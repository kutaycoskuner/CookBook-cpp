// KaprekarTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {

	for (int replay = 0; replay < 1;) {
		std::cout << "Please enter a number" << "\n";
		int x = {};
		while (1) {
			std::cin >> x;
			if (x >= 1000 && x <= 9999) {
				break;
			}
			std::cout << "Your number must have 4 digits\n";
		}

		for (int jjj = 0; jjj < 7; jjj++) {


			int arr[4] = {};
			int mod = 10000;
			for (int iii = 0; iii < 4; ++iii) {
				int div = mod / 10;
				arr[iii] = (x % mod) / div;
				mod = mod / 10;

			}

			int small[4]{};
			int big[4]{};

			for (int iii = 0; iii < 4; ++iii) {
				small[iii] = arr[iii];
				big[iii] = arr[iii];
			}

			for (int iii = 0; iii < 3; ++iii) {
				for (int yyy = iii + 1; yyy < 4; ++yyy) {
					if (small[iii] >= small[yyy]) {
						small[iii] = small[iii] + small[yyy];
						small[yyy] = small[iii] - small[yyy];
						small[iii] = small[iii] - small[yyy];
					}
				}
			}

			for (int iii = 0; iii < 3; ++iii) {
				for (int yyy = iii + 1; yyy < 4; ++yyy) {
					if (big[iii] <= big[yyy]) {
						big[iii] = big[iii] + big[yyy];
						big[yyy] = big[iii] - big[yyy];
						big[iii] = big[iii] - big[yyy];
					}
				}
			}

			int bigNum{};
			int smallNum{};

			for (int iii = 3; iii >= 0; --iii) {
				bigNum = bigNum + big[iii] * mod;
				smallNum = smallNum + small[iii] * mod;
				mod = mod * 10;
			}

			x = bigNum - smallNum;
			std::cout << bigNum << " - " << smallNum << " = " << x << "\n";
		}

		std::cout << "Another test? [y / n]\n";
		char answer{};
		std::cin >> answer;
		if (answer == 'y') {
			replay = 1;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

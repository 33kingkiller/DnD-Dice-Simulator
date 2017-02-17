#include <iostream>
#include <ctime>
#include <random>
#include <string>
#include <algorithm>

bool quit = false;
bool valid;
std::string dieType;
int output;

int main () {
	do {
		valid = true;

		std::cout << "Please input the type of die you wish to roll.\n";
		std::cin >> dieType;

		transform(dieType.begin(), dieType.end(), dieType.begin(), ::toupper);

		srand(time(0));

		if (dieType == "D00" || dieType == "D100") {
			output = (rand() % 100) + 1;
		}
		else if (dieType == "D20") {
			output = (rand() % 20) + 1;
		}
		else if (dieType == "D12") {
			output = (rand() % 12) + 1;
		}
		else if (dieType == "D10") {
			output = (rand() % 10) + 1;
		}
		else if (dieType == "D8") {
			output = (rand() % 8) + 1;
		}
		else if (dieType == "D6") {
			output = (rand() % 6) + 1;
		}
		else if (dieType == "D4") {
			output = (rand() % 4) + 1;
		}
		else if (dieType == "END") {
			quit = true;
		}
		else {
			std::cout << "\"" << dieType << "\" is not a valid type of die.\n";
			valid = false;
		}

		if (!quit && valid) {
			std::cout << "The result is: " << output << ".\n";
		}
	} while (!quit);

	return 0;
}
#include <iostream>

bool RepeatM{};
bool Repeat1{};
bool Repeat2{};
int WhichTask{};
int Task1Num{};
char GoAgainM{};
char GoAgain1{};
char GoAgain2{};
void task1();
void task2();

int main() {
	do {
		RepeatM = false;
		system("cls");
		std::cout << "Which task would you like to test the code for?" << std::endl << "1. Task 1 - Find out if a number is over 20 and even" << std::endl
			<< "2. Task 2 - Print all numbers from 1 to 10" << std::endl << std::endl << "Enter number:" << std::endl;
		std::cin >> WhichTask;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		switch (WhichTask) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		default:
			std::cout << "You didn't input the number of a task!" << std::endl;
		}
		std::cout << "Would you like to test the code for another task? Y/N" << std::endl;
		std::cin >> GoAgainM;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		if (GoAgainM == 'Y' || GoAgainM == 'y') {
			RepeatM = true;
		}
	} while (RepeatM == true);

	return 0;
}

void task1() {
	do {
		Repeat1 = false;
		system("cls");
		std::cout << "Pick a number, any number!" << std::endl;
		std::cin >> Task1Num;
		if (std::cin.good() == false) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "That's not a number!" << std::endl;
			Repeat1 = true;
			continue;
		}
		system("cls");
		if (Task1Num >= 20) {
			if (Task1Num % 2 == 0) {
				std::cout << Task1Num << " is even, and is above 20!" << std::endl;
			}
			else {
				std::cout << Task1Num << " is above 20, but is not even!" << std::endl;
			}
		}
		else {
			std::cout << Task1Num << " is under 20!" << std::endl;
		}
		std::cout << "Would you like to check another number? Y/N" << std::endl;
		std::cin >> GoAgain1;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		if (GoAgain1 == 'Y' || GoAgain1 == 'y') {
			Repeat1 = true;
		}
	} while (Repeat1 == true);

}

void task2() {
	do {
		for (int i = 0; i <= 10; i++) {
			std::cout << i << std::endl;
		}
		std::cout << "Wanna see me do it again? Y/N" << std::endl;
		std::cin >> GoAgain1;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		if (GoAgain2 == 'Y' || GoAgain2 == 'y') {
			Repeat2 = true;
		}
	} while (Repeat2 == true);
}
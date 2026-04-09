#include <iostream>
#include <cmath>

int main() {
	int opp; //mathmatical opperator like +,-,...
	double num1;
	double num2;
	
	std::cout << "Please input what type of calculation should take place" << '\n';
	std::cout << "For Addition please press 1" << '\n' << "For Subtraction please press 2" << '\n' << "For Multiplication please press 3" << '\n' << "And for Division please press 4" << '\n' << ">> ";
	std::cin >> opp;
	if(opp == 1){
		std::cout << "Please enter the Base Number (short BN): ";
		std::cin >> num1;
		std::cout << "Please enter the number you want to add to the BN: ";
		std::cin >> num2;
		std::cout << num1 << "+" << num2 << "=" << num1+num2 << '\n';
	} else if(opp == 2) {
		std::cout << "Please enter the Base Number (short BN): ";
                std::cin >> num1;
                std::cout << "Please enter the number you want to subtract from the BN: ";
                std::cin >> num2;
                std::cout << num1 << "-" << num2 << "=" << num1-num2 << '\n';
	} else if(opp == 3) {
		std::cout << "Please enter the Base Number (short BN): ";
                std::cin >> num1;
                std::cout << "Please enter the number you want to Multiply with the BN: ";
                std::cin >> num2;
                std::cout << num1 << "*" << num2 << "=" << num1*num2 << '\n';
	} else if (opp == 4) {
		std::cout << "Please enter the Base Number (short BN): ";
                std::cin >> num1;
                std::cout << "Please enter the number you want to devide the BN by: ";
                std::cin >> num2;
                std::cout << num1 << "/" << num2 << "=" << num1/num2 << '\n';
	} else {
		std::cout << opp << " is not a valid option.";
	}
}

#include <iostream>
#include <cmath>

int main() {
	int num;

	do{
		std::cout << "Please enter a positive number: ";
		std::cin >> num;
	}while(num < 1);
	
	std::cout << num << " is a positive number!" << '\n';

	return 0;
}

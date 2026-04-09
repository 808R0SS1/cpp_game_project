#include <iostream>
#include <cmath>

int main() {
	std::string name;

	while(name.empty()) {
		std::cout << "Enter your name here: ";
		std::getline(std::cin, name);
	}
	std::cout << "Hi " << name << '\n';
	return 0;
}

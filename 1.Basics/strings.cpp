#include <iostream>
#include <cmath>

using string_t = std::string;

int main() {
	string_t name;
	std::getline(std::cin, name);

	std::cout << name << '\n';
	
	return 0;
}

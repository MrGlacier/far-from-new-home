#include <iostream>
#include "nameGenerator/namegen.hpp"

int main() {
	std::cout << "Hallo Welt!" << std::endl;
	std::cout << "Mein Name ist: ";
	
	NameGenerator::getName();

	std::cout << std::endl;

	return false;
}

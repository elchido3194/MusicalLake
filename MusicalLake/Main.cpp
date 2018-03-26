#include <iostream>
#include "SongsOrder.h"

int main() {
	SongsOrder SongsOrder;
	std::string input;
	while (input != "X") {
		std::cout << "Please tell me a sound" << std::endl;
		std::cout << "Or press X to Exit" << std::endl;
		std::cin >> input;
		std::cout << "----------------------------------------------------" << std::endl;
		SongsOrder.songs(input);
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}

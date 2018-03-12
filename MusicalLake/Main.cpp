#include <iostream>
#include "Songs.h"

int main() {
	Songs Song;
	std::string input;
	while (input != "X") {
		std::cout << "Please tell me a sound" << std::endl;
		std::cout << "List of Sounds: " << std::endl;
		for (int i = 0; i < Song.getSounds()->size(); i++) {
			std::cout << Song.getSounds()->at(i) << std::endl;
		}
		std::cout << "Or press X to Exit" << std::endl;
		std::cin >> input;
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << Song.getSong(input) << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
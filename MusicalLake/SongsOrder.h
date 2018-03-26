#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <tuple>
#define NUMBEROFSONGS 3
class SongsOrder {
public:
	SongsOrder();
	void songs(std::string);
private:
	std::array<std::vector<std::string>, NUMBEROFSONGS > order;
	std::string printSong(int i, int j);
	std::tuple<int, int> foundit(std::string);
};
//Constructor initializes the songs array of array
SongsOrder::SongsOrder() {
	order = { {
			{ "brr", "fiu", "cric-cric", "brrah" },
			{ "pep", "birip", "trri-trri", "croac" },
			{ "bri-bri", "plop", "cric-cric", "brrah" }
		} };
}
//returns a tuple of the found element
std::tuple<int, int> SongsOrder::foundit(std::string input) {
	for (int i = 0; i < std::size(order); i++) {
		for (int j = 0; j < std::size(order[i]); j++) {
			if (order[i][j] == input)
				return std::make_tuple(i, j);
		}
	}
	return std::make_tuple(-1, -1);
}

//Controls what foundit method returns, and calls the printing method
void SongsOrder::songs(std::string input) {
	std::tuple<int, int> position = foundit(input);
	int i = std::get<0>(position);
	int j = std::get<1>(position);
	if (std::get<0>(foundit(input)) == -1) {
		std::cout << "---Silence---" << std::endl;
	}
	else {
		std::cout << printSong(i, j) << std::endl;
	}
}

//Returns all next sounds from a given i and j
std::string SongsOrder::printSong(int i, int j) {
	std::string out = "";
	for (int k=j; k<std::size(order[i]); k++)
	{
		out += order[i][k] + " ";
	}
	out += "---Silence---";
	return out;
}


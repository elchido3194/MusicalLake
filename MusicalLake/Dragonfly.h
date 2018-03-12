#pragma once
#include <string>

class Dragonfly {
public:
	Dragonfly();
	~Dragonfly();
	std::string* getSounds();
	int getSoundsLength();
private:
	std::string sounds[3];
};

Dragonfly::Dragonfly() {
	this->sounds[0] = "fiu";
	this->sounds[1] = "plop";
	this->sounds[2] = "pep";
}
Dragonfly::~Dragonfly() {
}

std::string* Dragonfly::getSounds() {
	return this->sounds;
}

int Dragonfly::getSoundsLength() {
	return sizeof(sounds) / sizeof(std::string);
}
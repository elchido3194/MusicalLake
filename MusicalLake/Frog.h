#pragma once
#include <string>

class Frog {
public:
	Frog();
	~Frog();
	std::string* getSounds();
	int getSoundsLength();
private:
	std::string sounds[4];
};

Frog::Frog() {
	this->sounds[0] = "brr";
	this->sounds[1] = "birip";
	this->sounds[2] = "brrah";
	this->sounds[3] = "croac";

}
Frog::~Frog() {
}

std::string* Frog::getSounds() {
	return this->sounds;
}

int Frog::getSoundsLength() {
	return sizeof(sounds) / sizeof(std::string);
}
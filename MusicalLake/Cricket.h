#pragma once
#include <string>

class Cricket {
public:
	Cricket();
	~Cricket();
	std::string* getSounds();
	int getSoundsLength();
private:
	std::string sounds[3];
};

Cricket::Cricket() {
	this->sounds[0] = "cric-cric";
	this->sounds[1] = "trri-trri";
	this->sounds[2] = "bri-bri";
}
Cricket::~Cricket() {
}

std::string* Cricket::getSounds() {
	return this->sounds;
}

int Cricket::getSoundsLength() {
	return sizeof(sounds)/sizeof(std::string);
}
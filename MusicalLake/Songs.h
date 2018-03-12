#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include "Cricket.h"
#include "Dragonfly.h"
#include "Frog.h"

class Songs {
public:
	Songs();
	~Songs();
	void orderSounds();
	int* getOrder();
	std::vector<std::string>* getSounds();
	std::string getSong(std::string animalSound);
	std::string printSong(int index);
private:
	Frog Frog;
	Cricket Cricket;
	Dragonfly Dragonfly;
	int* order;
	std::vector<std::string>* sounds;
	std::string song;
	
};

Songs::Songs() {
	int number = Frog.getSoundsLength() + Cricket.getSoundsLength() + Dragonfly.getSoundsLength();
	order = new int[number];
	//An array that has an id for every sound
	for (int i = 0; i < number; i++) {
		order[i] = i;
	}

	//A vector that has all the sounds
	sounds = new std::vector<std::string>[number];
	//Adding Frog Sounds
	for (int j = 0; j < Frog.getSoundsLength(); j++) {
		sounds->push_back(this->Frog.getSounds()[j]);
	}
	//Adding DragonflySounds
	for (int j = 0; j < Dragonfly.getSoundsLength(); j++) {
		sounds->push_back(this->Dragonfly.getSounds()[j]);
	}
	//Adding CricketSounds
	for (int j = 0; j < Cricket.getSoundsLength(); j++) {
		sounds->push_back(this->Cricket.getSounds()[j]);
	}
	
}
Songs::~Songs() {
}

int* Songs::getOrder() {
	return order;
}

std::vector<std::string>* Songs::getSounds() {
	return sounds;
}

std::string Songs::getSong(std::string animalSound) {
	std::vector<std::string>::iterator it;
	it = std::find(sounds->begin(), sounds->end(), animalSound);
	int index = std::distance(sounds->begin(), it);
	song = "";
	//Returns the index if the sound is correct, else returns silence
	if (it != sounds->end()) {
		return Songs::printSong(index);
	}
	else {
		return "-- Silence --";
	}
	
}
//Prints the whole song
std::string Songs::printSong(int index) {
	switch (index)
	{
	case 0:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(4);
		break;
	case 1:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(8);
		break;
	case 2:
		song += sounds->at(index);
		song += " -- Silence-- ";
		break;
	case 3:
		song += sounds->at(index);
		song += " -- Silence-- ";
		break;
	case 4:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(7);
		break;
	case 5:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(7);
		break;
	case 6:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(1);
		break;
	case 7:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(2);
		break;
	case 8:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(3);
		break;
	case 9:
		song += sounds->at(index);
		song += " -> ";
		Songs::printSong(5);
		break;
	default:
		break;
	}
	return song;
}




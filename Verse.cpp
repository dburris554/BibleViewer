/*
 * Verse.cpp
 *
 *  Created on: May 18, 2018
 *      Author: david
 */

#include "Verse.h"

Verse::Verse() //invalid verse
{
	number = 0;
	words = 0;
	numOfWords = 0;
	simVerses = 0;
	numOfSimVerses = 0;
}

Verse::Verse(int myNumber, std::string wordString)
{
	number = myNumber;
	words = processWordString(wordString); //This method will also set numOfWords
	simVerses = 0;
	numOfSimVerses = 0;
}

Verse::~Verse() {}

int Verse::getNumber()
{
	return number;
}

void Verse::setNumber(int myNumber)
{
	number = myNumber;
}

std::string Verse::getWord(int index)
{
	return words[index];
}

void Verse::addSimVerse(Verse* myVerse)
{
	simVerses[numOfSimVerses++] = myVerse;
}

Verse* Verse::getSimVerse(int index)
{
	if (index < numOfSimVerses)
	{
		return simVerses[index];
	}
	else
	{
		return new Verse();
	}
}

std::string* Verse::processWordString(std::string wordString)
{
	//TODO
	return new std::string;
}

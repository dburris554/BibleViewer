/*
 * Verse.h
 *
 *  Created on: May 18, 2018
 *      Author: david
 */

#include <string>

#ifndef VERSE_H_
#define VERSE_H_

class Verse {
public:
	Verse(); //invalid verse
	Verse(int myNumber, std::string wordString);
	virtual ~Verse();
	int getNumber();
	void setNumber(int myNumber);
	std::string getWord(int index);
	void addSimVerse(Verse* myVerse);
	Verse* getSimVerse(int index);

private:
	int number;
	int numOfWords;
	int numOfSimVerses;
	std::string* words;
	Verse** simVerses;
	std::string* processWordString(std::string wordString);
};

#endif /* VERSE_H_ */

#include "levelOne.h"
#include "levelOne.h"
#include <iostream>
#include <random>


void levelOne()
{
	std::cout << "\n(GAME START)" << std::endl; //put this somewhere else
	int deckNum;
	deckNum = numGenerator();																//This function will generate a randome number between 1 and 10.

	std::cout << "*The Devil shuffles the deck and picks a card*\n"
		<< "MMM, *devious laughter* let's hear your pick. What's the number? \n";																

	guessOne(deckNum);

	// This function will give the player a win or lose
	//finalGuess();
}

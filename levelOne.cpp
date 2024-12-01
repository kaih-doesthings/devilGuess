#include "levelOne.h"
#include <iostream>


void levelOne()
{
	//dialogue (will eventually be a text file)
	std::cout << "\n(GAME START)" << std::endl;

	std::cout << "*The Devil shuffles the deck and picks a card*\n"
		<< "MMM, *devious laughter* let's hear your pick. What's the number? \n";

	bool gameWon = true;

	//send value from takeGuess() that we can use to start the endGame function.
	if (takeGuess() == gameWon)
	{
		goodEnd(); 
	}
	else
	{
		badEnd();
	}
	 
}

#include "levelOne.h"
#include <chrono>
#include <iostream>
#include <thread>


void levelOne()
{
	//dialogue (will eventually be a text file)
	std::cout << "\n---------------------\n\n"
			  << "\nNarrator:\n"
			  << "**The Devil shuffles the deck and picks a single card**\n";
			  std::this_thread::sleep_for(std::chrono::seconds(2));

	std::cout << "\nMr.Lucifer:\n" 
			  << "'MMM, **devious laughter** let's hear your pick. What's the number?' \n";
			  //No delay as user input acts as a delay.

	bool gameWon = true;

	//this will start the ending that corresponds with the player's win/loss status.
	if (takeGuess() == gameWon)
	{
		goodEnd(); 
	}
	else
	{
		badEnd();
	}
	 
}

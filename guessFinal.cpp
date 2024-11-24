#include "levelOne.h"
#include <iostream>

void guessFinal(int devilNum3)
{
	int pGuess3;
	std::cin >> pGuess3;

	if (pGuess3 == devilNum3)
	{
		std::cout << "you win. I'll let you go...for now. \n";
		exit(1);
	}
	else
	{
		std::cout << "You lose... \n";
		exit(1);
	}
}
#include "levelOne.h"
#include <iostream>

void guessTwo(int devilNum2)
{
	int pGuess2;
	std::cin >> pGuess2;

	if (pGuess2 == devilNum2)
	{
		std::cout << "you win \n";
	}
	else
	{
		std::cout << "last guess... \n";
		guessFinal(devilNum2);
		//levelOne();
	}
}
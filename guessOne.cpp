#include "levelOne.h"
#include "guessTwo.h"
#include <iostream>

void guessOne(int devilNum)
{
	int pGuess1;
	std::cin >> pGuess1;

	if(pGuess1 == devilNum)
	{
		std::cout << "you win \n";
	}
	else
	{
		std::cout << "try again \n";
		guessTwo(devilNum);
		//levelOne();
	}
}
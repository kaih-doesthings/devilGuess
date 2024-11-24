#include "levelOne.h"
#include <iostream>


void rules()
{
	std::cout << "\n\nThe game is simple. \n"
		<< "\nI pick one card from a shuffled deck and you have 3 "
		<< "chances to guess the correct card number. \n"
		<< "If you guess correctly, I'll let you go, but "
		<< "if you guess incorrectly...\n"
		<< "Your soul is mine. Got it? \n\n";
	
	std::string confirmA;
	std::cin >> confirmA;

	if (confirmA == "yes")
	{
		std::cout << "HAHAHA, FOOL! You don't stand a chance. Let's begin \n";
		levelOne();
	}
	else
	{
		std::cout << "Ugh, fine. Listen carefully:\n";
		rules();
	}
}
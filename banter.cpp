#include <iostream>
#include <string>
#include "rules.h"
#include "endGame.h"
#include "playExit.h"
#include "main.h"

//get value from main, define banter, print thing with value from main
void banter(std::string userReply)														
{
	if (userReply == "yes")																//Start of "Yes" options that start the game.
	{
		std::cout << "Marvelous! Let's begin...\n";
		rules();
	}
	else if (userReply == "Yes") 
	{ 
		std::cout << "Marvelous! Let's begin...\n"; 
		rules();
	}
	else if (userReply == "yes.") 
	{ 
		std::cout << "Marvelous! Let's begin...\n"; 
		rules();
	}
	else if (userReply == "Yes.") 
	{ 
		std::cout << "Marvelous! Let's begin...\n"; 
		rules();
	}
	else if (userReply == "YES") 
	{ 
		std::cout << "Marvelous! Let's begin...\n";
		rules();
	}
	else if (userReply == "YES!") 
	{ 
		std::cout << "Marvelous! Let's begin...\n"; 
		rules();
	}
	else if (userReply == "yes?") 
	{ 
		std::cout << "Marvelous! Let's begin...\n"; 
		rules();
	}
	else if (userReply == "no")															//Start of "No" options that end the game.
	{																					
		endGame();																		
	}
	else if (userReply == "No") { endGame(); }
	else if (userReply == "no.") { endGame(); }
	else if (userReply == "No.") { endGame(); }
	else if (userReply == "NO") { endGame(); }
	else if (userReply == "NO!") { endGame(); }
	else if (userReply == "no?") { endGame(); }
	else                                                                               //Loop back for undesireable answer.
	{ 
		std::cout << "STOP PLAYING GAMES OR YOUR LIFE IS FORFEIT! \n";
		main();
	}
		
}
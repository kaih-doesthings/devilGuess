#include "main.h"
#include <iostream>
#include <string>



int main()
{
	
	std::string reply = playExit();     // This function allows player to start or leave the game by forfeit. get value from function
	banter(reply);						// This function heckles the player based on their answer and repeats the question if the answer is undesirable.
										// Note: Game stops after the second undesireable reply. Want continual loop.
	
	// This function contains code to actually play the game. This may be included in rules as a function call path
	//levelOne();
	
	// This function choses a path if player wins or loses game.
	//winLose();

	return 0;
}
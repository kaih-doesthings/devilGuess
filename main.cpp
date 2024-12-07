/*DevilGuess Version 3.0 (Nov.28th, 2024)
* 
* > Cleaning up things and adding while, do-while, and switch loops.
* > Only repeatable / major functions will be in external files.
* > The "gameMenu" function eliminates banter, but essentially does the same thing.
* > The "devilGuess" function holds the actual game so we can return to the start 
* menu upon completion.
* > We have added an actual story with timed dialogue delay.
* > Added restart loop to game.
* 
* > Developer Note: learn to make directories / subdirectories to elimnate transitive headers.
*/
#include "devilGuess.h"

int main()
{
	
	bool doRestart = true;
	do
	{
		//uses switch statements to play or exit the game 
		gameMenu();	

		//the actual game is here  
		devilGuess();			
			
	}while(doRestart == 1 );	
	//back to main menu at the end of the game.
	
	return 0;
}


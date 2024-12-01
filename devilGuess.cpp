#include "devilGuess.h"

void devilGuess() //this is the actual game function
{

	gameRules(); //tells the player the rules and confirms understanding

	levelOne();  //first level: decides course of action if player loses or wins

	credits();	 //end of game

}
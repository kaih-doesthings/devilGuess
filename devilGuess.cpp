#include "devilGuess.h"
#include <chrono>
#include <iostream>
#include <thread>


void devilGuess() //this is the actual game function
{
	//Create the setting and use a timed delay to output story text.
	//dialogue (will eventually be a text file)
	std::cout << "\n------------Game Start------------\n"
			  << "Narrator:\n"
			  << "**You are forced into an open elevator by two strong bodyguards. "
			  << "As the door closes they hit the button for a floor labled 'C0'. \n"
			  << "You don't know where you're going or how you got there, "
			  << "but you do know one thing...this place is QUITE toasty! \n"
			  << "You reach floor 'C0' and are welcomed by a cozy red office. "
			  << "The two guards push you into a chair in front of the large desk "
			  << "in the center of the room. There stands a horned, red man looking out "
			  << "of the window to the ground below. He turns around and greets you.**\n";
			  std::this_thread::sleep_for(std::chrono::seconds(35));

	std::cout << "\nMr.Lucifer:\n"
			  << "Ah, another unfortunate soul. Seems you're in a bit of a predicament! "
			  << "Not quite good enough for the Big Man, and yet, not quite AWFUL enough for me. \n"
			  << "PURGATORY I believe you humans call it!? No matter. The wanderers usually go "
			  << "to me, but I've found myself bored of this mundane routine. So I figured, "
			  << "why not make a little game of it? Spice things up, you know?!\n";
			  std::this_thread::sleep_for(std::chrono::seconds(22)); 

	std::cout << "\nNarrator:\n"
			  << "**The devil cracks a devious smirk as you look around nervously.**\n";
		      std::this_thread::sleep_for(std::chrono::seconds(4));
	
	gameRules(); //tells the player the rules and confirms understanding

	levelOne();  //first level: decides course of action if player loses or wins

	credits();	 //end of game

}
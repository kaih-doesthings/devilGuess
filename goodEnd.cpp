#include "gameEnd.h"
#include <chrono>
#include <iostream>
#include <thread>


/*this would hold the good-end functions, animations, and dialogue
(subject to change with more knowlege) */
void goodEnd()
{
	std::cout << "\nMr.Lucifer:\n"
			  << "But unfortunately for you, I'm a bit of a bad sport. You may have won the game, "
			  << "but I never lose. GRAB <insert gender>!\n";
			  std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << "\nNarrator:\n"
			  << "**Sensing the gravity of the situation, you grab the closest desk object "
			  << "and chuck it at the nearest bodyguard. THEY'RE DISTRACTED!\n"
			  << "You make a mad dash for the elevator and close the doors just in time! "
			  << "Ironically, the button for the exit is aptly named 'The HELL Out'.\n"
			  << "You mash the button and get the HELL OUT of there!**\n";
		      std::this_thread::sleep_for(std::chrono::seconds(15));
}

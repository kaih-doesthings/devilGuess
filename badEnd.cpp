#include "gameEnd.h"
#include <chrono>
#include <iostream>
#include <thread>

/*this would hold the bad-end functions, animations, and dialogue 
(subject to change with more knowlege) */
void badEnd()
{
	std::cout << "\nNarrator:\n"
			  << "**Fear washes over you as the devil flips the card over and "
			  << "reveals the card number.**\n";
			  std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << "\nMr.Lucifer:\n"
			  << "Aww, well that's just too bad! HORRENDOUS intuition unfortunately. "
			  << "Oh well. GRAB <insert gender>!\n";
			  std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << "\nNarrator:\n"
			  << "**Sensing the gravity of the situation, you grab the closest desk object "
			  << "and attempt to chuck it at nearest bodyguard. They were too quick "
		      << "and grabbed your arms again before you could do anything!\n"
			  << "They pick up a squirming you and drag you back to the elevator. "
			  << "Ironically, the button toward your doom is aptly named 'HELL'.\n"
			  << "They hit the button and seal your fate. Next floor: HELL!**\n";
			  std::this_thread::sleep_for(std::chrono::seconds(15));  
}
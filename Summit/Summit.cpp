// Summit.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

#include <conio.h>
#include <stdio.h>
#include <tchar.h>

#include "Summit.h"

int main()
{
	Summit::MainMenu();
	return 0;
}

void
Summit::MainMenu()
{
	printf("SUMMIT\n");
	printf("1: Play game\n2: Settings\n3: How to play\n\n0: Exit\n");
	char cInput;
	cInput = _getche();
	switch (cInput)
	{
	case '1':

	case '2':

	case '3':
		printf("\n\nAn original game by Daniel Nicholson, adapted for the home console!\n\n"
			"Each turn, players simultaneously select and play a card.\n"
			"An assassin wins the round if each other card is a diplomat.\n"
			"Assassins in play are discarded if they did not win.\n"
			"If a guard stops an assassin, it returns to hand.\n"
			"Diplomats return to hand assuming they do not die to an assassin.\n"
			"If everyone plays diplomats three times in a row, the round is a tie.\n"
			"In a diplomatic tie, the players with the least points win.\n"
			"After a round, the winners gain 1 point, and the round restarts.\n"
			"The first player to 3 points wins the game!\n\n");
		break;
	case '0':
		return;
	default:
		printf("\nPlease input A valid option.\n");
	}
	// Always display main menu after any option
	MainMenu();
}
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

		break;
	case '0':
		return;
	default:
		printf("\nPlease input A valid option.\n");
	}
	// Always display main menu after any option
	MainMenu();
}
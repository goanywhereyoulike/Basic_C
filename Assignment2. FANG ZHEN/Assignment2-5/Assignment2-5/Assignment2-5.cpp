// Assignment2-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int tries = 10;
	int x = 0;
	int mysterynumber = 18;
	int selectnumber = 0;

	while (tries > 0)
	{
		printf("Guess the number (%d tries left): ", tries);
		scanf_s("%d", &selectnumber);

		if (mysterynumber > selectnumber)
		{
			printf("You guessed too low!\n");

		}
		else if (mysterynumber < selectnumber)
		{
			printf("You guessed too high!\n");
		}
		else
		{
			printf("\nYOU WIN!");
			tries = -1;
			x++;
		}
		tries--;
	}
	if (x == 0)
	{
		printf("\nYOU LOSE!");
	}

}

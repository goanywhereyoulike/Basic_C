// Lab1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	printf("Enter a number: ");
	scanf_s("%d", &number);

	if (number % 13 == 0)
	{
		if (number % 7 == 0)
		{
			printf("That number is divisible by both 13 and 7");
		}
		else
		{
			printf("That number is divisible by 13, but not 7");
		}
	}
	else if (number % 7 == 0)
	{
		printf("That number is divisible by 7, but not 13");
	}
	else
	{
		printf("That number is not divisible by 13 and 7");
	}
}



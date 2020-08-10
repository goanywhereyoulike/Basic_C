// Assignment2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	int i = 0;
	int x = 0;

	printf("Enter a number: ");
	scanf_s("%d", &number);

	for (i = 2; i < number; i++)
	{
		if (number%i == 0)
		{
			x++;
		}

	}
	if (x > 0)
	{
		printf("That number is a composite number.");
	}
	else
	{
		printf("That number is a prime number.");
	}

}



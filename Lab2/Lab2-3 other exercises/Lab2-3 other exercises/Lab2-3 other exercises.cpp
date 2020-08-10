// Lab2-3 other exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	int x = 0;
	int sum = 0;
	char answer = 'y';

	while (answer == 'y')
	{
		printf("Enter number to total the digits: ");
		scanf_s("%d", &number);

		while (number> 0)
		{
			
			x = number %10;
			number = (number - x) / 10;
			sum += x;

		}
		printf("The total of the number’s digits is %d\n\n", sum);
		sum = 0;
		printf("Would you like to pick again ? (y / n)");
		scanf_s(" %c", &answer);
	}

}


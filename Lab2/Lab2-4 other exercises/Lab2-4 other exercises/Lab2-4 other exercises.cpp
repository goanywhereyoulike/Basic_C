// Lab2-4 other exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	float water = 0;
	float money = 0;
	char answer = 'y';

	while (answer == 'y')
	{
		printf("Enter total Liters used: ");
		scanf_s("%f", &water);

		if (water <= 1000)
		{
			money = water * 0.22;
		}
		else if (water <= 4999 )
		{
			money = water*0.27;
		}
		else if (water <= 9999 )
		{
			money = water*0.34;
		}
		else
		{
			money = water*0.39;
		}
		printf("Total cost: $%.2f\n\n", money);

		printf("Would you like to pick again? (y/n)");
		scanf_s(" %c", &answer);
	}
}



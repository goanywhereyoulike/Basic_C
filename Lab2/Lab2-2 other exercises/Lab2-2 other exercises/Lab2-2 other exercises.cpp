// Lab2-2 other exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;
	char answer = 'y';

	while (answer == 'y')
	{
		printf("Enter triangle’s Side 1: ");
		scanf_s("%d", &side1);
		printf("Enter triangle’s Side 2: ");
		scanf_s("%d", &side2);
		printf("Enter triangle’s Side 3: ");
		scanf_s("%d", &side3);
		
		if (side1 == side2 && side1 == side3)
		{
			printf("The triangle is Equilateral\n\n");
		}
		else if (side1 == side2 && side1 != side3)
		{
			printf("The triangle is Isosceles\n\n");
		}
		else if (side1 == side3 && side1 != side2)
		{
			printf("The triangle is Isosceles\n\n");
		}
		else if (side2 == side3 && side2 != side1)
		{
			printf("The triangle is Isosceles\n\n");
		}
		else
		{
			printf("The triangle is Scalene\n\n");
		}

		printf("Would you like to pick again? (y/n)");
		scanf_s(" %c", &answer);
	}

}


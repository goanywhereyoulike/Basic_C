// Assignment1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	float fgrade = 0;
	char degree = 'A';
	printf("Enter your grade: ");
	scanf_s("%f", &fgrade);

	if (fgrade >= 90)
	{
		degree = 'A';
	}
	else if (fgrade >= 80 && fgrade < 90)
	{
		degree = 'B';
	}
	else if (fgrade >= 70 && fgrade < 80)
	{
		degree = 'C';
	}
	else if (fgrade >= 60 && fgrade < 70)
	{
		degree = 'D';
	}
	else
	{
		degree = 'F';
	}
	printf("You got a grade of %c", degree);
}

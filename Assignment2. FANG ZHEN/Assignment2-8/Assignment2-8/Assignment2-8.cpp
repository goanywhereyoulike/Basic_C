// Assignment2-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	int i = 0;
	int count = 0;
	printf("Enter your integer: ");
	scanf_s("%d", &number);

	if (number < 0)
	{
		number = (-1)*number;
	}

	for (i = 1; i <= number; i *= 10)
	{
		count++;
	}
	printf("This number has %d digits.", count);
}


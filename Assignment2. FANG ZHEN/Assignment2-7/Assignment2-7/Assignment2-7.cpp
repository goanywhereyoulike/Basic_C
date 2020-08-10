// Assignment2-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int i = 0;
	int base = 0;
	int exponent = 0;
	int sum = 1;
	int x = 0;
	printf("Enter the base number: ");
	scanf_s("%d", &base);
	printf("Enter the exponent number: ");
	scanf_s("%d", &exponent);

	if (exponent < 0)
	{
		x = exponent * (-1);
	}
	else
	{
		x = exponent;
	}

	for (i = 1; i <= x; i++)
	{
		sum *= base;

	}

	if (exponent >=0)
	{
		printf("%d raised to the power of %d is %d", base, exponent, sum);
	}
	else
	{
		printf("%d raised to the power of %d is 1/%d", base, exponent, sum);
	}
}


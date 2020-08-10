// Lab1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	float number1 = 0;
	float number2 = 0;
	float number3 = 0;

	printf("Enter first number: ");
	scanf_s("%f", &number1);
	printf("Enter second number: ");
	scanf_s("%f", &number2);
	printf("Enter third number: ");
	scanf_s("%f", &number3);

	if (number1 > number2 && number1 > number3)
	{

		printf("The first number is highest.");

	}

	else if (number2 > number1 && number2 > number3)
	{
		printf("The second number is highest.");
	}

	else if (number3 > number1 && number3 > number1)
	{
		printf("The third number is highest.");
	}

	else
	{
		printf("They are equal.");
	}
}



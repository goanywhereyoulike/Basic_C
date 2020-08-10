// Assignment1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int month = 0;
	printf("Enter the number of the month: ");
	scanf_s("%d", &month);

	if (month == 1)
	{
		printf("That month is January!");
	}
	else if (month == 2)
	{
		printf("That month is February!");
	}
	else if (month == 3)
	{
		printf("That month is March!");
	}
	else if (month == 4)
	{
		printf("That month is April!");
	}
	else if (month == 5)
	{
		printf("That month is May!");
	}
	else if (month == 6)
	{
		printf("That month is June!");
	}
	else if (month == 7)
	{
		printf("That month is July!");
	}
	else if (month == 8)
	{
		printf("That month is August!");
	}
	else if (month == 9)
	{
		printf("That month is September!");
	}
	else if (month == 10)
	{
		printf("That month is October!");
	}
	else if (month == 11)
	{
		printf("That month is November!");
	}
	else if (month == 12)
	{
		printf("That month is December!");
	}
	else
	{
		printf("Error! You are wasting my time!");
	}
}

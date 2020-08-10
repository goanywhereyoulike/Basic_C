// Assignment2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	int i = 0;

	for (i = 1; i < 12; i++)
	{
		number = i * (i + 1) / 2;
		printf("%d, ", number);
	}
	printf("%d", i*(i + 1) / 2);
}



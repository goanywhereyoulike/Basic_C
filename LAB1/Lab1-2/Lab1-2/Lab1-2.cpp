// Lab1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int tall = 0;
	int feet = 0;
	int inch = 0;

	printf("Enter your height in total inches: ");
	scanf_s("%d", &tall);

	feet = tall / 12;
	inch = tall % 12;

	printf("Your height is %d feet %d inches", feet, inch);
}



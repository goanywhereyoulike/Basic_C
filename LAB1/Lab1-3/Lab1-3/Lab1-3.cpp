// Lab1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char character = 'a';
	printf("Enter a character: ");
	scanf_s("%c", &character);

	if (character >= 65 && character <= 90)
	{
		printf("It's an upper-case letter!");
	}
	else if (character >= 97 && character <= 122)
	{
		printf("It's a lower-case letter!");
	}
	else if (character >= 48 && character <= 57)
	{
		printf("It's a number");
	}
	else
	{
		printf("It's a symbol!");
	}
}



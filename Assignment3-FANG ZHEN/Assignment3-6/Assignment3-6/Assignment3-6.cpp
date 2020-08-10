// Assignment3-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

char ToUpperCase(char lower)
{
	char upper;
	if (lower <= 122 && lower >= 97)
	{
		upper = lower - 32;
		return upper;
	}
	else
	{
		return lower;
	}
}


int main()
{
	char letter,result;
	printf("Enter character to turn upper-case: ");
	scanf_s(" %c", &letter);

	result = ToUpperCase(letter);
	printf("Here is your new upper-case character: %c",result);
}



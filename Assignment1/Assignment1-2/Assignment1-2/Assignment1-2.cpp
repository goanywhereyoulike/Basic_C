// Assignment1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char letter1 = 'A';
	char letter2 = 'B';
	char letter3 = 'C';
	char letter4 = 'D';
	char letter5 = 'E';

	printf("Enter the first letter: ");
	scanf_s("%c", &letter1);
	printf("Enter the second letter: ");
	scanf_s(" %c", &letter2);
	printf("Enter the third letter: ");
	scanf_s(" %c", &letter3);
	printf("Enter the fourth letter: ");
	scanf_s(" %c", &letter4);
	printf("Enter the fifth letter: ");
	scanf_s(" %c", &letter5);

	printf("Your name is %c%c%c%c%c!", letter1, letter2, letter3, letter4, letter5);
}



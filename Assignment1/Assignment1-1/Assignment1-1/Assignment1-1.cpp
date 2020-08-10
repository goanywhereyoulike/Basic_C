// Assignment1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char cInput = 'A';
	printf("Enter your gender: ");
	scanf_s("%c", &cInput);
	if (cInput == 'M')
	{
		printf("You are a Male!");
	}
	else if (cInput == 'F')
	{
		printf("You are a Female!");
	}
	else
	{
		printf("Error! Do not waste my time!");
	}
}



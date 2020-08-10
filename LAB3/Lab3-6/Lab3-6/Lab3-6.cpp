// Lab3-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>
void Mastermind()
{
	int number = 0, number1, number2, number3, number4;
	int anumber, bnumber, cnumber, dnumber;
	int tries = 9;
	anumber = rand() % 10;
	bnumber = rand() % 10;
	cnumber = rand() % 10;
	dnumber = rand() % 10;
	
	printf("Welcome to Mastermind!The four secret numbers have been randomized\n");
	int b[] = { anumber, bnumber, cnumber, dnumber };
	while (tries >=0 && number != 4)
	{
		number = 0;
		printf("Enter first number: ");
		scanf_s("%d", &number1);
		printf("Enter first number: ");
		scanf_s("%d", &number2);
		printf("Enter first number: ");
		scanf_s("%d", &number3);
		printf("Enter first number: ");
		scanf_s("%d", &number4);
		int a[] = { number1, number2, number3, number4 };
		
		for (int i = 0; i < 4; i++)
		{
			if (a[i] == b[i])
			{
				number++;
			}
		}
		if (tries <= 0)
		{
			printf("\nYou Lose!");
			break;
		}
		if (number == 4)
		{
			printf("\nYou guessed the combination, you win!");
		}
		else
		{
			printf("\n%d of your numbers are correctly placed.\n", number);
			printf("You have %d tries left.\n\n", tries);
			tries--;
		}	
	}
	
}


int main()
{
	srand(time(NULL));
	Mastermind();
}


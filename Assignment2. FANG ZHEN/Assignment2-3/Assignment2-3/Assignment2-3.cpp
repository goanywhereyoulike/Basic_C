// Assignment2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int number = 0;
	int sum = 0;


	for(number=0;number!=-1;sum+=number)
	{
		printf("Enter a number: ");
		scanf_s("%d", &number);
		if (number == -1)
		{
			printf("\nThe sum of all numbers entered is %d.", sum);
		}
		
	}
	
}


// Lab3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


int CountDays(int year1, int year2)
{
	int days = 0,alldays;
	for(int i = year1;i<=year2; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			days++;
		}
	}
	alldays = (year2 - year1+1) * 365 + days;
	return alldays;
}

int main()
{
	printf("There are %d days", CountDays(1989, 1994));
}


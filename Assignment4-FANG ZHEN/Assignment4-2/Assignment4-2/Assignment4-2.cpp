// Assignment4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

float GetMean(int Set[])
{
	float sum = 0;
	float average = 0;
	for (int i = 0; i < 8; i++)
	{
		sum += Set[i];

	}
	average = sum / 8;
	return average;
}


int main()
{
	int numberSet[8] = { 3, 7, 10, 13, 23, 65, 91, 130 };
    printf("The result is %.2f",GetMean(numberSet));
}


// Assignment4-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void ClockwiseShift(int Set[])
{
	int result[8];
	result[0] = Set[7];
	for (int i =1; i < 8; i++)
	{
		result[i] = Set[i-1];

	}
	
	printf("Order after shifting: ");
	for (int j = 0; j < 8; j++)
	{
		printf("%d ", result[j]);
	}

}



int main()
{
	int numberSet[8] = { 64, 47, 100, 55, 78, 90, 91, 16 };
	ClockwiseShift(numberSet);
}


// Assignment4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void PrintArrayIndexAt(int Set[], int number)
{
	
	if (number >=0 && number<=7)
	{
		printf("The number is: %d", Set[number]);
	}
	else
	{
		printf("ERROR!");
	}

}
int main()
{
	int numberSet[8] = { 3, 7, 10, 1, 23, 6, 91, 7 };
	PrintArrayIndexAt(numberSet, 9);
}


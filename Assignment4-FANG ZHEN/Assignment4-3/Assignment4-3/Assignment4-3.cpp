// Assignment4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void OddEvenSorter(int Set[])
{  
	int Odd[10], Even[10];
	int x = 0, y = 0;
	for (int i = 0; i < 10; i++)
	{
		if (Set[i] % 2 != 0)
		{
			Odd[x] = Set[i];
			x++;

		}
		else
		{
			Even[y] = Set[i];
			y++;
		}

	}
	printf("Contents of even number array: ");
	for (int j = 0; j <y; j++)
	{
		printf("%d ", Even[j]);
	}

	printf("\nContents of odd number array: ");
	for (int j = 0; j <x; j++)
	{
		printf("%d ", Odd[j]);
	}

}


int main()
{
	int numberSet[10] = { 64, 47, 100, 55, 78, 90, 91, 16,2,9 };
	OddEvenSorter(numberSet);
	
}


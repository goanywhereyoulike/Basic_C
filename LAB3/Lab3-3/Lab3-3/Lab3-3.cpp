// Lab3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

void MiniLottery(int number1, int number2, int number3)
{
	int i, j, k, match=0;
	i = rand() % 5 + 1;
	j = rand() % 5 + 1;
	k = rand() % 5 + 1;
	printf("The randomized numbers are %d, %d, %d\n", i, j, k);
	int a[] = { i,j,k };
	int b[] = { number1,number2,number3 };
	for (int x = 0; x < 3; x++)
	{
		
			if (a[x] == b[x])
			{
				match++;
			}
		
	}
	printf("You matched exactly %d number/s", match);
}
			



int main()
{
	srand(time(NULL));
	MiniLottery(4,3,2);
	
}


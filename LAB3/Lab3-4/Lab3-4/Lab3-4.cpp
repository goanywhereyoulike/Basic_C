// Lab3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int CountPrimeNumbers(int min, int max)
{
	int number = 0;
	int primenumber = 0;
	for (int i = min; i <= max; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				number++;
			}

		}
		if (number <=0 )
		{
			primenumber++;
		}
		number = 0;
	}
	return primenumber;
}



int main()
{
	int result = 0;
	result = CountPrimeNumbers(30,50);
	printf("There are %d prime numbers in that range.", result);
}


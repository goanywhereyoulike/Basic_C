// Lab2-3 star patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			
			if (j <i&&j>0&&i<5)
			{
				printf("#");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}


// Lab2-1 other exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int i = 0;
	for (i = 1; i < 99; i += 2)
	{
		if (i % 7 != 0)
		{
			printf("%d, ", i);
		}

	}
	if (i % 7 != 0)
	{
		printf("%d", i);
	}
}


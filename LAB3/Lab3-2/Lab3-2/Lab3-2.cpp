// Lab3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>

int CheckCriticalHit(int damage)
{
	int time = 0;
	time = rand() % 10 + 1;
	if (time <= 3)
	{
		return damage * 2;
	}
	else
	{
		return damage;
	}
		
}


int main()
{
	int result = 0;
	srand(time(NULL));
	result = CheckCriticalHit(40);
	printf("The damage dealt is %d.", result);
}


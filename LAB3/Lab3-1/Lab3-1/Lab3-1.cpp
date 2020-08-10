// Lab3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>


int Randomize(int min, int max)
{
	int number;
	number = rand() % (max + 1 - min) + min;
	return number;

}
int main()
{
	int result;
    srand(time(NULL)); 
	result = Randomize(10, 20);
	printf("The randomized number is %d", result);
}


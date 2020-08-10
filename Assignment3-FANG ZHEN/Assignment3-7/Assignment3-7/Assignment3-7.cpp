// Assignment3-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void CountTo1000(int start, int increment)
{
	for (int i = start; i <= 1000; i += increment)
	{
		printf("%d\n", i);
	}
}


int main()
{
	int input1, input2;
    printf("Enter number to start counting from: ");
	scanf_s("%d", &input1);
	printf("Enter number to skip counting by: ");
	scanf_s("%d", &input2);
	CountTo1000(input1, input2);
}


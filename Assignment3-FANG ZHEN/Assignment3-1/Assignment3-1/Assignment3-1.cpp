// Assignment3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void DrawRectangle(int height, int length)
{
	
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}


int main()
{
	int height, length;
	printf("Enter height: ");
	scanf_s("%d", &height);
	printf("Enter length: ");
	scanf_s("%d", &length);
	DrawRectangle(height,length);
}


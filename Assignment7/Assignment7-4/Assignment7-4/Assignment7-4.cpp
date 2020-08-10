// Assignment7-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	FILE *point;
	int number = 0;
	fopen_s(&point, "Grades.txt", "w");

	while (number != -1)
	{
		printf("Enter a number:");
		scanf_s("%d", &number);
		if (number != -1)
		{
			fprintf(point, "%d\n", number);
		}
	}
	fclose(point);
}



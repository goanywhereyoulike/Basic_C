// Assignment3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

float GetCircleArea(float radius)
{
	float area;
	area = radius * radius*3.1416;
	return area;
}


int main()
{
	float result, input;
    printf("Enter radius: ");
	scanf_s("%f", &input);
	result = GetCircleArea(input);
	printf("The circle’s area is %.2f", result);

}

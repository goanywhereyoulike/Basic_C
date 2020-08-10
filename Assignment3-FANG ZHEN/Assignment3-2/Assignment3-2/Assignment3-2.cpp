// Assignment3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



float AbsoluteValue(float number)
{
	if (number < 0)
	{
		return (-number);
	}
	else
	{
		return number;
	}

}

int main()
{
	float result,input;
	printf("Enter number: ");
	scanf_s("%f", &input);
	
	result = AbsoluteValue(input);
	printf("The absolute value is %.2f", result);
}



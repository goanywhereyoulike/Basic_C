// Assignment3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


float KilosToPounds(float kilogram)
{
	float pounds;
	pounds = 2.2*kilogram;
	return pounds;
}

int main()
{
   float result,input;
   printf("Enter weight in kilograms: ");
   scanf_s("%f", &input);
   result = KilosToPounds(input);
   printf("The weight in pounds is %.2f lbs", result);
}



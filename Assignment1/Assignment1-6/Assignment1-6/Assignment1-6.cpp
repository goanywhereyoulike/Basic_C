// Assignment1-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	float celsius = 0;
	float fahrenheit = 0;

	printf("Enter the temperature in Celsius: ");
	scanf_s("%f", &celsius);

	fahrenheit = celsius * 9 / 5 + 32;

	printf("%.2f Celsius = %.2f Farenheit.", celsius, fahrenheit);
}

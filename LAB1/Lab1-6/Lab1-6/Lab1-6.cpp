// Lab1-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int money = 0;
	printf("Enter your total money: ");
	scanf_s("%d", &money);

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;

	a = money / 100;
	b = (money - 100*a) / 50;
	c = (money - 100 * a - 50 * b) / 20;
	d = (money - 100 * a - 50 * b - 20 * c) / 10;
	e = (money - 100 * a - 50 * b - 20 * c - 10 * d) / 5;
	f = (money - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e) / 2;
	g = (money - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e - 2 * f) / 1;

	printf("$100 bills: %d\n$50 bills: %d\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$2 coins: %d\n$1 coins: %d", a, b, c, d, e, f, g);
}


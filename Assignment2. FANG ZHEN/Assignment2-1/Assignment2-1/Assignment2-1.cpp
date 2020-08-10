// Assignment2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int nHealth = 100;
	int damage = 0;

	do
	{
		printf("Enter your damage: ");
		scanf_s("%d", &damage);
		nHealth -= damage;
		printf("The enemy now has %d HP left.\n", nHealth);
	} while (nHealth > 0);
	printf("The enemy is dead!");
}



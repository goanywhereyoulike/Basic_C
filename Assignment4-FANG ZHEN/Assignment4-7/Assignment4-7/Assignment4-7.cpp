// Assignment4-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int TakeDamage(int damage, int health,int number)
{
	
	if (health > 0)
	{
		return TakeDamage(damage, health - damage, number + 1);
		
	}
	else
	{
		return number;
	}
	
}


int main()
{
    int result=0;
	int health, damage,number=0;
	printf("Enter the damage: ");
	scanf_s("%d", &damage);
	printf("Enter your health: ");
	scanf_s("%d", &health);
	result = TakeDamage(damage, health,number);
	printf("You're dead in %d turns.", result);
}


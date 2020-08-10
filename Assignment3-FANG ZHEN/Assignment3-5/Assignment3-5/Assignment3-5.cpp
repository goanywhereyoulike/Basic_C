// Assignment3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

bool CanEquipWeapon(int strength, int requirestrength, bool player)
{
	float finalstrength;
	if (player == true)
	{
		finalstrength = 1.3*strength;
		if (finalstrength >= requirestrength)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		finalstrength = strength;
		if (finalstrength >= requirestrength)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}



int main()
{
	int input1, input2;
	char answer;
	bool result, Barbarian;
	printf("Enter player's strength : ");
	scanf_s("%d", &input1);
	printf("Enter weapon's strength requirement : ");
	scanf_s("%d", &input2);
	printf("Are you a Barbarian ? (y / n) ");
	scanf_s(" %c",&answer);
	if ( answer == 'y'||answer=='Y')
	{
		Barbarian = true;
	}
	else if(answer == 'n'||answer=='N')
	{
		Barbarian = false;
	}
	else
	{
		printf("ERROR");
	}

	result = CanEquipWeapon(input1, input2, Barbarian);
	
	if (result == true)
	{
		printf("You can equip the weapon!");
	}
	else
	{
		printf("You CANNOT equip the weapon!");
	}
	   

}



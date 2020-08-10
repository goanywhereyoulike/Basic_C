// Lab1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int item = 0;
	int moneyhave = 100;
	int moneyleft = 0;
	
	printf("You have $%d.\n[1]-Potion $10\n[2]-Sword $15\n[3]-Gold Bar $45\n",moneyhave);

	
	printf("\nChoose an item you'll buy: ");
	scanf_s("%d", &item);
	if (item == 1)
	{
		moneyleft = moneyhave - 10;
		printf("You bought a Potion!\nYou have $%d left!", moneyleft);
	}
	else if (item == 2)
	{
		moneyleft = moneyhave - 15;
		printf("You bought a Sword!\nYou have $%d left!", moneyleft);
	}
	else
	{
		moneyleft = moneyhave - 45;
		printf("You bought a Gold Bar!\nYou have $%d left!", moneyleft);
	}
}



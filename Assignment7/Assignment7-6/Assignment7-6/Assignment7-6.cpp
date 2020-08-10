// Assignment7-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


int main()
{
	char name[50];
	char answer='y';
	int speed;
	int acceleration;
	FILE *point;
	fopen_s(&point, "Karts.txt", "a");
	printf("File Kart.txt loaded.\n");
	if (point == NULL)
	{
		printf("ERROR");
	}
	else
	{
		printf("Enter new Kart's driver name:");
		scanf_s("%s", name, 50);
		printf("Enter new Kart's speed:");
		scanf_s("%d", &speed);
		printf("Enter new Kart's acceleration:");
		scanf_s("%d", &acceleration);

		fprintf(point, "\n%s\n", name);
		fprintf(point, "%d\n", speed);
		fprintf(point, "%d\n", acceleration);
		while (answer == 'y')
		{
			printf("\nKart added. (The kart should successfully add to the file at this point.)\n");
			printf("Would you like to add another kart? (y/n)");
			scanf_s(" %c", &answer);
			if (answer == 'y')
			{
				printf("\nEnter new Kart's driver name:");
				scanf_s("%s", name, 50);
				printf("Enter new Kart's speed:");
				scanf_s("%d", &speed);
				printf("Enter new Kart's acceleration:");
				scanf_s("%d", &acceleration);

				fprintf(point, "%s\n", name);
				fprintf(point, "%d\n", speed);
				fprintf(point, "%d\n", acceleration);
			}
		}
	}
}



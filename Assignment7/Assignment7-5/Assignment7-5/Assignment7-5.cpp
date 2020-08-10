// Assignment7-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
struct Karts
{
	char name[50];
	int speed;
	int acceleration;
	struct Karts *next;
};
int main()
{
	FILE *point;
	fopen_s(&point, "Karts.txt", "r");

	struct Karts *head = (struct Karts *)malloc(sizeof(struct Karts));
	struct Karts *current = head;
	int totalnumber = 0;
	if (point == NULL)
	{
		printf("ERROR");
	}
	else
	{
		while (feof(point) == false)
		{
			if (totalnumber != 0)
			{
				current->next = (struct Karts *)malloc(sizeof(struct Karts));
				current = current->next;

			}

			fscanf_s(point, "%s", current->name, 50);
			fscanf_s(point, "%d", &current->speed);
			fscanf_s(point, "%d", &current->acceleration);
			current->next = NULL;
			totalnumber++;

		}
		

	}
	fclose(point);
	printf("File Kart.txt loaded.\n");
	int i = 1;
	current = head;
	while (current != NULL)
	{
		printf("Kart %d: %s. %d speed, %d acceleration\n", i,current->name,current->speed,current->acceleration);
		current = current->next;
		i++;
	}

	struct Karts *temp = head;
	temp = temp->next;
	current = head;
	for (int n = 0; n < 2; n++)
	{
		current = current->next;
	}
	temp->next = current->next;
	free(current);

	printf("\n");
	printf("Third Kart deleted.\n");
	printf("File updated\n");
	current = head;
	i = 1;
	while (current != NULL)
	{
		printf("Kart %d: %s. %d speed, %d acceleration\n", i, current->name, current->speed, current->acceleration);
		current = current->next;
		i++;
	}

	fopen_s(&point, "Karts.txt", "w");
	current = head;
	while (current != NULL)
	{
		fprintf(point, "%s\n", current->name);
		fprintf(point, "%d\n", current->speed);
		fprintf(point, "%d\n", current->acceleration);
		current = current->next;
	}

	fclose(point);
}


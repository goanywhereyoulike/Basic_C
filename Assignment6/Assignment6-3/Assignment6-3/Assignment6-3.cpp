// Assignment6-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
struct Games
{
	char gamenames[50];
	struct Games *next;
	struct Games *prev;
};
int main()
{
	int input = 0;
	struct Games *head = (struct Games*)malloc(sizeof(struct Games));

	struct Games *tail = head;
	strcpy_s(tail->gamenames, "Halo");
	tail->next = NULL;
	tail->prev = NULL;

	tail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(tail->next->gamenames, "PUBG");
	tail->next->prev = tail;
	tail->next->next = NULL;
	tail = tail->next;

	tail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(tail->next->gamenames, "Dota");
	tail->next->prev = tail;
	tail->next->next = NULL;
	tail = tail->next;

	tail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(tail->next->gamenames, "League");
	tail->next->prev = tail;
	tail->next->next = NULL;
	tail = tail->next;

	tail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(tail->next->gamenames, "Ys");
	tail->next->prev = tail;
	tail->next->next = NULL;
	tail = tail->next;

	struct Games *current = head;

	current = head;
	while (current != NULL)
	{
		printf("%s  ", current->gamenames);
		current = current->next;
	}

	printf("\n");

	struct Games *current2;
	struct Games *newgame= (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(newgame->gamenames, "Overwatch");
	newgame->next = NULL;
	newgame->prev = NULL;



	current = head;
	printf("Which place do you want to add Overwatch?");
	scanf_s("%d", &input);
	if (input > 1&&input<6)
	{

		for (int i = 0; i < input - 2; i++)
		{
			current = current->next;

		}
		current2 = current->next;
		//printf("%s", current->gamenames);
		current->next = newgame;
		newgame->prev = current;
		newgame->next = current2;
		current2->prev = newgame;

		current = head;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->next;
		}

		current = tail->prev;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->prev;
		}


	}
	else if(input==1)
	{
		head->prev = newgame;
		newgame->next = head;

		current = newgame;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->next;
		}

		current = tail->prev;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->prev;
		}

	}
	else if (input == 6)
	{
		tail->next = newgame;
		newgame->prev = tail;

		current = head;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->next;
		}

		current = tail;
		while (current != NULL)
		{
			printf("%s  ", current->gamenames);
			current = current->prev;
		}


	}




}


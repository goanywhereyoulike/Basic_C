// Assignment6-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	struct Games *deletenode;
	printf("Which placement do you want to delete? ");
	scanf_s("%d", &input);

	if (input > 1&&input<5)
	{

		current = head;
		for (int i = 0; i < input - 2; i++)
		{
			current = current->next;
		}
		deletenode = current->next;
		//printf("%s", current->gamenames);

		current->next = deletenode->next;
		deletenode->next->prev = current;
		free(deletenode);

	}
	else if(input==1)
	{
		deletenode = head;
		head = deletenode->next;
		head->prev = NULL;
		free(deletenode);
	}
	else if (input == 5)
	{
		deletenode = tail;
		tail = tail->prev;
		tail->next = NULL;
		free(deletenode);

	}


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

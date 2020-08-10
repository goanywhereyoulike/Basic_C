// Assignment6-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	char inputname[30]="no";
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
	printf("\n\n");


	while (strcmp(inputname,"done") !=0)
	{
		printf("Add a game into the list:");
		scanf_s("%s", inputname, 30);
		if (strcmp(inputname, "done") == 0)
		{
			break;
		}
		else
		{

			tail->next = (struct Games*)malloc(sizeof(struct Games));
			strcpy_s(tail->next->gamenames, inputname);
			tail->next->prev = tail;
			tail->next->next = NULL;
			tail = tail->next;
		}
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


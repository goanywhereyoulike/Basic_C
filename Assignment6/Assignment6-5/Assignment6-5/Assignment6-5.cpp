// Assignment6-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	printf("\n\n");
	printf("The result is:\n");

	struct Games *current1=head;
	struct Games *current2;
	struct Games *current3;
	struct Games *current4;

	current = head;
	current = current->next;
	current2 = current;
	current = current->next;
	current3 = current;
	current = current->next;
	current4 = current;

	//printf("%s %s %s %s", current1->gamenames, current2->gamenames, current3->gamenames, current4->gamenames);

	current1->next = current3;
	current3->next = current2;
	current3->prev = current1;
	current2->prev = current3;
	current2->next = current4;
	current4->prev = current2;

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
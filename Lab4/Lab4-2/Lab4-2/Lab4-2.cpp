// Lab4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

typedef struct Node
{
	int data;
	struct Node *next;

}Node_t;
int main()
{

	Node_t *head = (Node_t*)malloc(sizeof(Node_t));
	head->data = 1;
	head->next = NULL;

	Node_t *current = head;

	for (int i = 1; i < 10; i++)
	{
		current->next = (Node_t*)malloc(sizeof(Node_t));
		current = current->next;
		current->data = i + 1;
		current->next = NULL;

	}

	current = head;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", current->data);
		current = current->next;

	}

	
	current = head;
	for (int i = 0; i < 9; i++)
	{
		current = current->next;
		
	}
	printf("\nOutput: %d ", current->data);

	current = head;
	for (int i = 0; i < 8; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 7; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 6; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);
		
	current = head;
	for (int i = 0; i < 5; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 4; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 3; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 2; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	for (int i = 0; i < 1; i++)
	{
		current = current->next;

	}
	printf("%d ", current->data);

	current = head;
	printf("%d ", current->data);
}



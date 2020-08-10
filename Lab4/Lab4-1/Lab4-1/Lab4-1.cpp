// Lab4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;

	}

}



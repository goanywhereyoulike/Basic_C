
#include "pch.h"
#include <iostream>
struct Accounts
{
	char name[50];
	long long amount;
	int pin;
	struct Accounts *next;
};
int main()
{
	FILE *point;
	fopen_s(&point, "Accounts.txt", "r");

	struct Accounts *head;
	head = (struct Accounts *)malloc(sizeof(struct Accounts));
	struct Accounts *current = head;
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
				current->next = (struct Accounts *)malloc(sizeof(struct Accounts));
				current = current->next;
			}

			fscanf_s(point, "%s", current->name, 50);
			fscanf_s(point, "%lld", &current->amount);
			fscanf_s(point, "%d", &current->pin);
			current->next = NULL;
			totalnumber++;
		}
		fclose(point);
	}

	printf("File Accounts.txt loaded.\n");
	int i = 1;
	current = head;
	while (current != NULL)
	{
		printf("Account %d: %s has $%lld and pin of %d.\n", i, current->name, current->amount, current->pin);
		current = current->next;
		i++;
	}
}

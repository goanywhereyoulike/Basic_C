// Lab4-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

typedef struct Student
{
	char name[30];
	int schoolID;
	struct Student *next;

}student_t;

int main()
{
	int n = 1;
	student_t *start = (student_t *)malloc(sizeof(student_t));
	start->schoolID = 1001;
	strcpy_s(start->name, "Bob");
	start->next = NULL;

	student_t *student = start;
	student->next = (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 2013;
	strcpy_s(student->name, "Ted");
	student->next = NULL;

	student->next = (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 4226;
	strcpy_s(student->name, "Ann");
	student->next = NULL;

	student->next = (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 2133;
	strcpy_s(student->name, "Ron");
	student->next = NULL;

	student->next = (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 3098;
	strcpy_s(student->name, "Ken");
	student->next = NULL;

	student = start;
	n = 1;
	while (student != NULL)
	{
		printf("Student %d: %s (%d)\n", n, student->name, student->schoolID);
		n++;
		student = student->next;
	}

	student = start;
	for (int i = 0; i < 3; i++)
	{
		student = student->next;
	}

	//printf("%s", student->name);

	printf("\nDelete the linked list, and the output is:\n\n");

	student_t *dropstudent=start;
	for (int i = 0; i < 2; i++)
	{
		dropstudent = dropstudent->next;
	}

	dropstudent->next = student->next;
	free(student);

	student = start;
    n = 1;
	while (student != NULL)
	{
		printf("Student %d: %s (%d)\n", n, student->name, student->schoolID);
		n++;
		student = student->next;
	}

}

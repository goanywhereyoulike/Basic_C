// Lab4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	student_t *start = (student_t *)malloc(sizeof(student_t));
	start->schoolID = 1001;
	strcpy_s(start->name, "Bob");
	start->next = NULL;

	student_t *student = start;
	student->next= (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 2013;
	strcpy_s(student->name, "Ted");
	student->next = NULL;

	student->next = (student_t *)malloc(sizeof(student_t));
	student = student->next;
	student->schoolID = 2113;
	strcpy_s(student->name, "Ron");
	student->next = NULL;


	student = start;
	int n = 1;
	while (student!= NULL)
	{
		printf("Student %d: %s (%d)\n", n, student->name, student->schoolID);
		n++;
		student = student->next;
	}

}


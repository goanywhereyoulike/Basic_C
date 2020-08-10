// Lab4-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	char newname[30];
	int newnumber;
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
	student->schoolID = 2113;
	strcpy_s(student->name, "Ron");
	student->next = NULL;



	printf("Enter new student's name: ");
	scanf_s("%s", newname,30);
	printf("Enter new student's student ID: ");
	scanf_s("%d", &newnumber);

	student_t *newstudent;
	newstudent = (student_t *)malloc(sizeof(student_t));
	strcpy_s(newstudent->name, newname);
	newstudent->schoolID = newnumber;
	newstudent->next = NULL;

	student->next = newstudent;


	student = start;
	n = 1;
	while (student != NULL)
	{
		printf("Student %d: %s (%d)\n", n, student->name, student->schoolID);
		n++;
		student = student->next;
	}

}

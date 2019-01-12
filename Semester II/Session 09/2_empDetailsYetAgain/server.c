#include <stdio_ext.h>
#include "emp.h"

int i;

void readData(int n, struct employee* s)

{
	for(i = 0; i < n; i++)
	{
		printf("\nEnter the SSN, Name and Department of Employee %d:\n", i+1);
		scanf("%d", &s -> SSN);
		__fpurge(stdin);
		scanf("%s", s -> Name);
		scanf("%s", s -> Dept);
		s++;
	}
}

void dispData(int n, struct employee* s)
{
	for(i = 0; i < n; i++)
	{
		printf("\nThe details of Employee %d:\n", i+1);
		printf("SSN: %d\n", s -> SSN);
		printf("Name: %s\n", s -> Name);
		printf("Dept: %s\n", s -> Dept);
		s++;
	}
	
	putchar('\n');
}


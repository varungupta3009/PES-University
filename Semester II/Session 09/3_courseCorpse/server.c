#include <stdio.h>
#include "CSE.h"

int i;

void readRecs(int n, struct Course* c)
{

	for (i = 0; i < n; i++)
	
	{
	
		printf("\nEnter the Course ID and the Course Name:\n");
		scanf("%s\n%s", (c+i) -> CID, (c+i) -> CN);
	
	}

}


void dropRecs(int* n, struct Course* c)
{
	
	int t;
	
	printf("\nEnter the number of courses to withdraw: ");
	scanf("%d",&t);
	
	*n = *n - t;

}

void dispRecs(int n, struct Course* c)
{

	printf("\nThe records are:\n");

	for (i = 0; i < n; i++)

	{

		printf("Course ID:\t%s\n", (c+i) -> CID);
		printf("Course Name:\t%s\n", (c+i) -> CN);

	}

}

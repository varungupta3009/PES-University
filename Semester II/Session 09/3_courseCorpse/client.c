#include <stdio.h>
#include <stdlib.h>
#include "CSE.h"

int main()

{

struct Course *c;
int n;

printf("Enter the number of courses: ");
scanf("%d",&n);

c = (struct Course*) malloc(n*sizeof(struct Course));

readRecs(n, c);
dispRecs(n, c);
dropRecs(&n, c);

c = (struct Course*) realloc(c, n*sizeof(struct Course));

printf("\nEnter the courses to retain:\n");

readRecs(n, c);

printf("\nThe updated recoreds are:\n");

dispRecs(n, c);

free(c);
c = NULL;

getchar();
return 0;

}

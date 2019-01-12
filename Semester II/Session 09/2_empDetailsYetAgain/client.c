#include <stdio.h>
#include <stdlib.h>
#include "emp.h"

int main()

{

	int n;
	struct employee* s;

	printf("\nEnter the number of employees: ");
	scanf("%d", &n);

	s = (struct employee*) malloc(n*sizeof(struct employee));

	readData(n, s);
	dispData(n, s);

	free(s);
	s = NULL;

	getchar();
	return 0;

}


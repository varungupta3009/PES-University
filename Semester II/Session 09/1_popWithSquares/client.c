#include <stdio.h>
#include <stdlib.h>
#include "pop.h"

int main()

{
	
	int n;
	
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	
	int *a;
	a = (int*) malloc(n*sizeof(int));
	
	readArray(n, a);
	popsArray(n, a);
	dispArray(n, a);
	
	free(a);
	a = NULL;
	
	getchar();
	return 0;

}

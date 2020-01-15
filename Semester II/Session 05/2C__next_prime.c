/* 2__next_prime.c [L5P2F1] */

#include <stdio.h>
#include "nP.h"

int main()

{
	/* Program to find the next prime number after a given number - Client */

	int n;

	printf("\nEnter a number:\n");
	scanf("%d", &n);

	int F = nP(n);

	if (F)
		printf("\nThe next prime number after %d is %d\n", n, F);
	else
		printf("\nThe given number (%d) is not prime!\n", n);

	getchar();
	return 0;
}

/***** END OF FILE *****/

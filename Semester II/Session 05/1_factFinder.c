/* 1_factFinder.c [L5P1F1] */

#include <stdio.h>

int fact(int n)
{
if (!n)
return 1;
else
return (n*fact(n-1));
}

int main()

{
								/* Program to find the factorial of a given number */

								int n;

								printf("\nEnter a number:\n");
								scanf("%d", &n);
								
								printf("\nFactorial of the given number, %d! = %d\n", n, fact(n));
								
								getchar();
								return 0;
}

/***** END OF FILE *****/

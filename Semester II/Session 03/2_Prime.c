/* 2_Prime.c [L3P2F1] */

#include <stdio.h>
#include <math.h>

int main()

{
								/* Program to check whether a given number is a Prime number */

								int n, s = 0, i;

								printf("\nEnter the number to be checked: ");
								scanf("%d", &n);

								if (n == 1)
																printf("\n1 is neither Prime nor Composite.\n");
								else if (!n)
																printf("\n0 is considered to be a Prime Number.\n");
								else if (n < 0)
																printf("\nNegetive Numbers cannot be Prime Numbers.\n");
								else
								{
																printf("\nThe factors of the given number are:\n");

																for (i = 1; i <= n; i++)
																{
																								if (!(n % i))
																								{
																																printf("%d\n", i);
																																s++;
																								}
																}

																if (s == 2)
																								printf("\nAs it has exactly %d factors, %d is a Prime Number.\n", s, n);
																else
																								printf("\nAs it has %d factors, which is greater than 2, %d is NOT a Prime Number.\n", s, n);
								}

								return 0;
}

/***** END OF FILE *****/

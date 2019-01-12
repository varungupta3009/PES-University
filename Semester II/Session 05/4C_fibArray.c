/* 4S_fibArray.c [L5P4F1] */

#include <stdio.h>
#include "fib.h"

int main()

{
                /* Program to print and store a Fibonacci Series in an Array - Client */
                
                int n;
                
                printf("\nEnter a number:\n");
                scanf("%d", &n);
                
                fib(n);
                
                getchar();
                return 0;
}

/***** END OF FILE *****/

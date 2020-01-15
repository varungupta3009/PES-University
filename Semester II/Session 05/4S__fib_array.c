/* 4__fib_array.c [L5P4F2] */

#include <stdio.h>
#include "fib.h"

void fib(int n)

{
    /* Program to print and store a Fibonacci Series in an Array - Server */

    int i, a[100] = {0, 1};
    printf("%d %d ", a[0], a[1]);

    for (i = 2; i <= n; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
        printf("%d ", a[i]);
    }

    putchar('\n');
}

/***** END OF FILE *****/

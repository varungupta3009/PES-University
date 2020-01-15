/* 2__next_prime.c [L5P2F2] */

#include <stdio.h>
#include "nP.h"

int Prime(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
        if (!(n % i))
            s++;
    if (s - 2)
        return 0;
    else
        return 1;
}

int nP(int n)
{
    if (Prime(n))
        while (1)
        {
            n++;
            if (Prime(n))
                return n;
        }
    else
        return 0;
}

/***** END OF FILE *****/

#include "H.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    DistributionCountingSorting(A, n);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", A[i]);
    }
    return 0;
}
#include "H.h"
#include <stdio.h>

void DistributionCountingSorting(int *A, int n)
{
    int l, u;
    l = u = A[0];
    int S[n];
    for (int i = 1; i < n; i++)
    {
        if (A[i] < l)
        {
            l = A[i];
        }
        if (A[i] > u)
        {
            u = A[i];
        }
    }
    int D[u + l];
    for (int i = 0; i < u; i++)
    {
        D[i] = 0;
    }
    for (int i = 0; i < n; i++)
        D[A[i] - l]++;
    for (int i = 1; i < u; i++)
    {
        D[i] = D[i - 1] + D[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int t = A[i] - l;
        S[D[t] - 1] = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = S[i];
    }
}

//void MergeSort(int *A, int n);
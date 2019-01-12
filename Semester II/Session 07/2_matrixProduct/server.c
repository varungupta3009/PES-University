#include "prod.h"

void prod(int m1, int n1, int m2, int n2, int a[m1][n1], int b[m2][n2], int r[m1][n2])
{
int i, j, k, s = 0;
for(i = 0; i < m1; i++)
for(j = 0; j < n2; j++)
{
for(k = 0; j < n1; k++)
s += a[i][k]*b[k][j];
r[i][j] = s;
s = 0;
}
}

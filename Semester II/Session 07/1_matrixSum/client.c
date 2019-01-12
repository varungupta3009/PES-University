#include <stdio.h>
#include "sum.h"

int main()
{
int m, n, i, j;
printf("Enter the order of the matrices: ");
scanf("%dx%d", &m, &n);
int a[m][n], b[m][n], r[m][n];
printf("Enter the elements of the first matrix:\n");
for(i=0; i<m; i++)
for(j=0; j<n; j++)
scanf("%d", &a[i][j]);
printf("Enter the elements of the second matrix:\n");
for(i=0; i<m; i++)
for(j=0; j<n; j++)
scanf("%d", &b[i][j]);
sum(m, n, a, b, r);
printf("The resultant matrix is:\n");
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
printf("%d\t", r[i][j]);
putchar('\n');
}
getchar();
return 0;
}

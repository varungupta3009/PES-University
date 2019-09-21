#include <stdio.h>
#include <string.h>
#include "H.h"

void main()
{
    char src[100], p[100];
    int n, pos;
    gets(src);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        gets(p);
        shifttable(p);
        printf("%d\n", horspool(src, p));
    }
}
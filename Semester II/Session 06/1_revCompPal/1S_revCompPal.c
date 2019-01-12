#include "pal.h"

int i;

void rev(char* s, char* s1, int n)
{
for (i = 0; i < n; i++)
s1[i] = s[n - i - 1];
}

int comp(char* s, char* s1, int n)
{
int f = 1;
for (i = 0; i < n && f; i++)
if (s[i] != s1[i])
f = 0;
return f;
}

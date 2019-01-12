#include <stdio.h>
#include <string.h>
#include "con.h"

int main(void)
{
char s[200] = "", s1[100]; int d;
printf("Enter the number of strings: ");
scanf("%d", &d);
int i;
for (i = 1; i <= d; i++)
{
printf("Enter String %d: ", i);
scanf("%s", s1);
int n = strlen(s), n1 = strlen(s1);
conc(s, s1, n, n1);
}

printf("The concatenated string is %s\n", s);

return 0;
}

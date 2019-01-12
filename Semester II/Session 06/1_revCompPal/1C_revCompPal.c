#include <stdio.h>
#include <string.h>
#include "pal.h"

int main(void)
{
char s[100], s1[100];
printf("Enter a string: ");
scanf("%s", s);
int n = strlen(s);

rev(s, s1, n);

if (comp(s, s1, n))
printf("The given string is a palindrome!\n");
else
printf("The given string is NOT a palindrome!\n");

return 0;
}


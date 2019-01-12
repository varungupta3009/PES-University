#include <stdio.h>
#include "stud.h"

int main()
{
int n;
printf("\nEnter the number of students: ");
scanf("%d", &n);
struct Student s[n];
fill(n, s);
getchar();
return 0;
}

#include <stdio.h>
#include "date.h"

int main()
{
struct Date d1, d2;
printf("Enter the first date: ");
scanf("%d/%d/%d", &d1.D, &d1.M, &d1.Y);
printf("Enter the second date: ");
scanf("%d/%d/%d", &d2.D, &d2.M, &d2.Y);
int r = comp(d1, d2);
if(r)
if(r == -1)
printf("The first date occurs before the second\n");
else printf("The first date occurs after the second\n");
else printf("The two dates occur on the same goddamn day! Yay!\n");
getchar();
return 0;
}

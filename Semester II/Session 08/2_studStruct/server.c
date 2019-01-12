#include<stdio.h>
#include<string.h>
#include "stud.h"

void fill(int n, struct Student s[n])
{
int i;
printf("\nEnter the details of the Students [Name, SRN, Phy, C, EC]\n");
for(i = 0; i < n; i++)
{
printf("\nStudent %d:\n\n", i+1);
scanf("%s\n%d\n%d\n%d\n%d", s[i].Name, &s[i].SRN, &s[i].P, &s[i].C, &s[i].E);
s[i].Total = s[i].P+s[i].C+s[i].E;
s[i].Avg = s[i].Total/3;
s[i].Res = 'P';
if(s[i].Avg > 85)
strcpy(s[i].Div, "FCD");
else if(s[i].Avg > 70)
strcpy(s[i].Div, "FC");
else if(s[i].Avg > 55)
strcpy(s[i].Div, "SC");
else if(s[i].Avg >= 40)
strcpy(s[i].Div, "TC");
else
{
strcpy(s[i].Div, "NC");
s[i].Res = 'F';
}
printf("\nThe Student Details are:\nTotal: %d\nAverage: %f\nDivision: %s\nResult: %c\n", s[i].Total, s[i].Avg, s[i].Div, s[i].Res);
}
}

#include <stdio.h>
#include "stud.h"


int main (void)

{
	
	int n;
	
	printf("\nEnter number of students: ");
	scanf("%d", &n);
    
    struct student a[n];
    
    int i;

    for(i = 0; i < n; i++) {
    
    	printf("\nEnter the details of Student %d:\nRoll: ", i+1);
        scanf("%d", &(a[i].roll));
        printf("Name: ");
        scanf("%s", a[i].name);
        
    }

	printf("\n\nThe student details before sorting are:\n");

    for(i = 0; i < n; i++)
        printf("\n%d: %s", a[i].roll, a[i].name);
    printf("\n");
	
    radixSort(n, a);
    
	printf("\n\nThe student details after sorting are:\n");
    
    for(i = 0; i < n; i++)
        printf("\n%d: %s", a[i].roll, a[i].name);
    printf("\n\n");

    return 0;

}


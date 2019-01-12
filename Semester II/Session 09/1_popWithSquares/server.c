#include <stdio.h>
#include "pop.h"

int i;

void readArray(int n, int* a)

{
    
    printf("\nPlease enter the elements:\n");
    for (i=0; i<n; i++) scanf("%d",&a[i]);

}

void popsArray(int n, int* a)

{
    
    for (i=0; i<n; i++) a[i]=a[i]*a[i];

}

void dispArray(int n, int* a)

{
    
    printf("\nThe populated array is:\n");
    for (i=0; i<n; i++) printf("%d\n",a[i]);
    putchar('\n');

}

#include <stdio.h>
#include "dupe.h"

int main ()

{
	int n;
	
	printf("\nPlease enter the number of elements to be inserted in the array: ");
	scanf("%d",&n);
    
    	int a[n], i;
    	
    	printf("\nEnter the Elements:\n");
    	
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	printf("\nThe entered array is:\n[ ");
	
	for(i = 0; i < n; i++)
        	printf("%d ", a[i]);
    
    	printf("]\n");
    
    	radixSort(n, a);
    
    	printf("\nThe array after applying Radix Sort is:\n[ ");
    	
    	for(i = 0; i < n; i++)
    		printf("%d ", a[i]);
    
    	printf("]\n\n");

    	return 0;

}


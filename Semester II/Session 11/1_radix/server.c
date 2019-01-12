#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int max(int n, int *a) {

    int i, max = a[0];

    for(i = 0; i < n; i++) {
        
        if(a[i] > max)
            max = a[i];
    
    }

    return max;

}


void radixSort(int n, int *a) {
	
	int i, c = 0, length = max(n, a) + 1, b[length];
    
    	for(i = 0; i < length; b[i] = -1, i++);
	for(i = 0; i < n; b[a[i]] = a[i], i++);

    	for(i = 0; i < length; i++)
        
        if(b[i] != -1)
             a[c++] = b[i];

}

#include <stdio.h>
#include "stud.h"

int max(int n, struct student *a) {

    int i, max = a[0].roll;

    for(i = 0; i < n; i++) {
        
        if(a[i].roll > max)
            max = a[i].roll;
    
    }

    return max;

}


void radixSort(int n, struct student *a) {
	
	int i, c = 0, length = max(n, a) + 1;
	struct student b[length];
    
    	for(i = 0; i < length; b[i].roll = -1, i++);
	for(i = 0; i < n; b[a[i].roll] = a[i], i++);

    	for(i = 0; i < length; i++)
        
        if(b[i].roll != -1)
             a[c++] = b[i];

}


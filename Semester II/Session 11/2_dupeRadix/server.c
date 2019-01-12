#include <stdio.h>
#include <stdlib.h>
#include "dupe.h"

int max(int n, int *a) {

    int i, max = a[0];

    for(i = 0; i < n; i++) {
        
        if(a[i] > max)
            max = a[i];
    
    }

    return max;

}

int occurences(int n, int *a, int val) {
	
	int i, occ = 0;
	for (i = 0; i < n; i++)
		if (a[i] == val)
			occ++;
	return occ;

}

void radixSort(int n, int *a) {
	
	int i, j, ct = 0, length = max(n, a) + 1, b[length], c[length], isin=0;
    
    for(i = 0; i < length; b[i] = -1, i++);
    
    for(i = 0; i < n; i++) {
    	
    	isin = 0;
    	
    	for(j = 0; j < length; j++)
    		if (a[i] == b[j])
    			isin = 1;

    	if (!(isin))
        	b[a[i]] = a[i];

        }
    
    int oc = 0;
    int rep = 0;
    
    for(i = 0; i < length; i++)
        if(b[i] != -1) {
        	 c[oc] = occurences(n, a, b[i]);
        	 oc++;
        }
        
    int p = 0;
    for(i = 0; i < length; i++)
        if(b[i] != -1) {
        	for (j = 0; j < c[p]; j++) {
        		a[ct] = b[i];
        		ct++;
        	}
        	p++;
        }
}

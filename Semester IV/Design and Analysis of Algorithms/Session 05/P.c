#include <stdio.h>
#include "H.h"

/*void Merge(Data* A, int m, int n) {
	printf("%d %d", m, n);
	int i, j, k;
	i = j = k = 0;
	Data B[n];
	while(i < m && j < n) {
		if(A[i].value <= A[j].value) {
			B[k] = A[i];
			i++;
		}
	}
	if(j = n) {
		while(i < m) {
			B[i++] = A[k++];
		}
	} else {
		while(j < n) {
			B[j++] = A[k++];
		}
	}
	while((i = 0) < n) {
		A[i++] = B[i++];
	}
}

void MergeSort(Data* A, int n) {
	if(n <= 1) return;
	int m = n/2;
	MergeSort(A, m-1);
	MergeSort(A+m, n-1);
	Merge(A, m, n);
}*/

void Merge(Data* arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    Data L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i].value <= R[j].value)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void MergeSort(Data* arr, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);

        Merge(arr, l, m, r);
    }
}

int BinarySearch(Data *A, int l, int r, int k) {
	if(r - l + 1 < 1) return -1;
	int m = (l+r)/2;
	if(k == A[m].value) return m;
	else if(k < A[m].value) return BinarySearch(A, l, m-1, k);
	return BinarySearch(A, m+1, r, k);
}

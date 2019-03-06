#include "H.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, T1, T2;
  scanf("%d", &n);
  Record A1[n], A2[n], A3[n], A4[n], A5[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &T1, &T2);
    A1[i].serialnumber = A2[i].serialnumber = A3[i].serialnumber = A4[i].serialnumber = A5[i].serialnumber = T1;
    A1[i].score = A2[i].score = A3[i].score = A4[i].score = A5[i].score = T2;
  }

  printf("Insertion Sort: %ld\n", InsertionSort(A1, n));
  printf("Bubble Sort: %ld\n", BubbleSort(A2, n));
  printf("Selection Sort: %ld\n", SelectionSort(A3, n));
  printf("Merge Sort: %ld\n", MergeSort(A4, 0, n-1));
  printf("Quick Sort: %ld\n", QuickSort(A5, 0, n-1));
/*
  for (int i = 0; i < n; i++) {
    printf("%ld %ld %ld %ld %ld\n", A1[i].serialnumber, A2[i].serialnumber, A3[i].serialnumber, A4[i].serialnumber, A5[i].serialnumber);
  }
*/
  return 0;
}

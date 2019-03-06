#include "H.h"
#include <stdio.h>

void QuickSort(Data* A, int n) {
  if(n <= 1) return;
  int s = Partition(A, n-1);
  printf("%d\n", s);
  QuickSort(A, s-1);
  QuickSort(A+s+1, n-1);
}

int Partition(Data * A, int n) {
  int p = A[0].id;
  int i = 1, j = n-1;
  while (i <= j) {
    while (i <= j && A[i].id < p) i++;
    while (i <= j && A[i].id > p) j--;
    if (i < j) {
      Data temp = A[i];
      A[i] = A[j];
      A[j] = temp;
      i++;
      j--;
    }
  }
  Data temp = A[0];
  A[0] = A[j];
  A[j] = temp;
  return j+1;
}

#include "H.h"

void QuickSort(Data *A, int lo, int hi) {
  if(lo < hi) {
    int s = Partition(A, lo, hi);
    QuickSort(A, lo, s-1);
    QuickSort(A, s+1, hi);
  }
}

int Partition(Data *A, int lo, int hi) {
  int p = A[hi].id;
  int i = lo-1;
  for (int j = lo; j < hi; j++) {
    if (A[j].id <= p) {
      i++;
      Data temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }
  Data temp = A[i+1];
  A[i+1] = A[hi];
  A[hi] = temp;
  return i+1;
}

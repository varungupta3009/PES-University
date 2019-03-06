#include "H.h"
#include <stdbool.h>

int Result[5];

long int InsertionSort(Record *A, int n) {
  for (int i = 0; i < n; i++) {
    Record Temp = A[i];
    int j = i - 1;
    while (j >= 0 && A[j].serialnumber > Temp.serialnumber) {
      A[j+1] = A[j];
      j--;
      Result[0]++;
    }
    //Result[0]++;
    A[j+1] = Temp;
  }
  return Result[0];
}

long int BubbleSort(Record *A, int n) {
  for (int i = 0; i < n-1; i++) {
    bool noSwaps = true;
    for (int j = 0; j < n-i-1; j++) {
      Result[1]++;
      if (A[j].serialnumber > A[j+1].serialnumber) {
        Record Temp = A[j];
        A[j] = A[j+1];
        A[j+1] = Temp;
        noSwaps = false;
      }
    }
    if(noSwaps) return Result[1];
  }
  return Result[1];
}

long int SelectionSort(Record *A, int n) {
  for (int i = 0; i < n-1; i++) {
    int min = i;
    for (int j = i+1; j < n; j++) {
      Result[2]++;
      if (A[j].serialnumber < A[min].serialnumber) min = j;
    }
    Record temp = A[i];
    A[i] = A[min];
    A[min] = temp;
  }
  return Result[2];
}

long int MergeSort(Record *A, int l, int r) {
  if (l < r) {
      int m = l+(r-l)/2;
      MergeSort(A, l, m);
      MergeSort(A, m+1, r);
      Merge(A, l, m, r);
  }
  return Result[3];
}

void Merge(Record* A, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    Record L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        Result[3]++;
        if (L[i].serialnumber <= R[j].serialnumber) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

long int QuickSort(Record *A, int lo, int hi) {
  if(lo < hi) {
    int s = Partition(A, lo, hi);
    QuickSort(A, lo, s-1);
    QuickSort(A, s+1, hi);
  }
  return Result[4];
}

int Partition(Record *A, int lo, int hi) {
  int p = A[hi].serialnumber;
  //int a = A[hi].serialnumber;
  //int b = A[(lo+hi-1)/2].serialnumber;
  //int c = A[lo-1].serialnumber;
  //int p = (a<b)?(a>c)?a:c:(b<c)?b:c;
  int i = lo-1;
  for (int j = lo; j < hi; j++) {
    Result[4]++;
    if (A[j].serialnumber <= p) {
      i++;
      Record temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }
  Record temp = A[i+1];
  A[i+1] = A[hi];
  A[hi] = temp;
  return i+1;
}

#include "H.h"
#include <stdbool.h>
#include <stdio.h>

//Bubble Sort
//Use Bubble Sort algorithm to sort the array of length with respect to their values.
//Return a copy of the array of objects of struct data after k passes.
Data* BubbleSort(Data* A, int n, int k) {
  bool knotrun = true;
  for (int i = 0; i < n-1; i++) {
    if (i == k) {
      for (int p = 0; p < n; p++) {
        printf("%d %d\n", A[p].id, A[p].value);
      }
      knotrun = false;
    }
    bool noSwaps = true;
    for (int j = 0; j < n-i-1; j++) {
      if (A[j].value > A[j+1].value) {
        Data temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
        noSwaps = false;
      }
    }
    if (noSwaps) {
      break;
    }
  }
  if (knotrun) {
    for (int i = 0; i < n; i++) {
      printf("%d %d\n", A[i].id, A[i].value);
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", A[i].id, A[i].value);
  }
}

//Selection Sort
//Use Selection Sort algorithm to sort the array of length with respect to their values.
//Return a copy of the array of objects of struct data after k passes.
Data* SelectionSort(Data * A, int n, int k) {
  bool knotrun = true;
  for (int i = 0; i < n-1; i++) {
    if (i == k) {
      for (int p = 0; p < n; p++) {
        printf("%d %d\n", A[p].id, A[p].value);
      }
      knotrun = false;
    }
    int min = i;
    for (int j = i+1; j < n; j++) {
      if (A[j].value < A[min].value) min = j;
    }
    Data temp = A[i];
    A[i] = A[min];
    A[min] = temp;
  }
  if (knotrun) {
    for (int i = 0; i < n; i++) {
      printf("%d %d\n", A[i].id, A[i].value);
    }
  }
  for (int p = 0; p < n; p++) {
    printf("%d %d\n", A[p].id, A[p].value);
  }
}

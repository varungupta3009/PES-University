#include <stdio.h>

int seqsearch(int *arr, int n, int key) {
  int p = -1;
  for (int i = 0; i < n; i++) {
    if(arr[i] == key) {
      if(p != -1) {
        printf("%d ", p);
      }
      p = i;
    }
  }
  return p;
}

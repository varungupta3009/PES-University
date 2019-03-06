int seqsearch(int *arr, int n, int key) {
  int p = -1;
  for (int i = 0; i < n; i++) {
    if(arr[i] == key) {
      p = i;
    }
  }
  return p;
}

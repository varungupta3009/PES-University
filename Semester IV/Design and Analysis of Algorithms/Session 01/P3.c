#include <string.h>

int seqsearch(struct strg *arr, int n, char *key) {
  for (int i = 0; i < n; i++) {
    if(strcmp(arr[i].s, key) == 0) {
      return i;
    }
  }
  return -1;
}

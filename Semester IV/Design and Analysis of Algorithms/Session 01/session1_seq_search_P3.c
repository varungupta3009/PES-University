#include "session1_seq_search.h"
#include<stdio.h>
#include<time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;
  clock_gettime(CLOCK_REALTIME, &start);

  int n;
  char k[50];
  scanf("%d", &n);
  struct strg a[n];
  for (int i = 0; i < n; i++) {
    scanf("%s", a[i].s);
  }
  scanf("%s", k);
  printf("%d\n", seqsearch(a, n, k));
  clock_gettime(CLOCK_REALTIME, &end);
  double timeinseconds = end.tv_nsec - start.tv_nsec;
  //printf("%.6f\n", timeinseconds);
  return 0;
}

#include "H.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;

	int n, k;
  scanf("%d\n", &n);
  Data A[n];
  for (int i = 0; i < n; i++) {
    scanf ("%d %d\n", &A[i].id, &A[i].value);
  }
	scanf("%d", &k);

  clock_gettime(CLOCK_REALTIME, &start);
	MergeSort(A, 0, n-1);
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", A[i].id, A[i].value);
  }
  int x = BinarySearch(A, 0, n-1, k);
  if(x == -1) printf("Not Found!\n");
  else printf("Found at %d - %d!\n", k, A[k].value);
  clock_gettime(CLOCK_REALTIME, &end);
	double time = (end.tv_nsec - start.tv_nsec);

	//printf("\n%.5f nano seconds.\n", time);

  return 0;
}

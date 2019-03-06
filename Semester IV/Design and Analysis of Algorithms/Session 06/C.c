#include "H.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;

	int n;
  scanf("%d", &n);
  Data A[n];
  for (int i = 0; i < n; i++) {
    scanf ("%d %d", &A[i].id, &A[i].value);
  }

  clock_gettime(CLOCK_REALTIME, &start);
	QuickSort(A, 0, n-1);
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", A[i].id, A[i].value);
  }
  clock_gettime(CLOCK_REALTIME, &end);
	double time = (end.tv_nsec - start.tv_nsec);

	printf("\n%.5f nano seconds.\n", time);

  return 0;
}

#include "H.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;

	int n;
  scanf("%d", &n);
  int A[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf ("%d", &A[i][j]);
    }
  }

  clock_gettime(CLOCK_REALTIME, &start);
	printf("%d\n", tsp(n, A));
  clock_gettime(CLOCK_REALTIME, &end);
	double time = (end.tv_nsec - start.tv_nsec);

	//printf("\n%.5f nano seconds.\n", time);

  return 0;
}

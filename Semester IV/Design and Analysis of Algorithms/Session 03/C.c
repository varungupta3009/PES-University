#include "H.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;

	int n, k, t1, t2;
  scanf("%d", &n);
  Data d1[n], d2[n], *s;
  for (int i = 0; i < n; i++) {
    scanf ("%d %d", &t1, &t2);
		d1[i].id = d2[i].id = t1;
		d1[i].value = d2[i].value = t2;
  }
	scanf("%d", &k);

	//Bubble Sort
	clock_gettime(CLOCK_REALTIME, &start);
	BubbleSort(d1, n, k);
  clock_gettime(CLOCK_REALTIME, &end);
	double btime = (end.tv_nsec - start.tv_nsec);

	//Selection Sort
	clock_gettime(CLOCK_REALTIME, &start);
	SelectionSort(d2, n, k);
  clock_gettime(CLOCK_REALTIME, &end);
	double stime = (end.tv_nsec - start.tv_nsec);

  printf("\n%.5f nano seconds.\n", btime);
	printf("\n%.5f nano seconds.\n", stime);

  return 0;
}

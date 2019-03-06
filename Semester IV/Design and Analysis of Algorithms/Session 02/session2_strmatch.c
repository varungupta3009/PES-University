#include "session2_strmatch.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  struct timespec start, end;
  clock_gettime(CLOCK_REALTIME, &start);

  char t[2000000];
  int n;
  scanf("%[^\n]%*c", t);
  scanf("%d\n", &n);
  char p[2000000];
  for (int i = 0; i < n; i++) {
    scanf ("%[^\n]%*c", p);
    printf("%d\n", strmatch_pattern(t, p));
  }
  clock_gettime(CLOCK_REALTIME, &end);
  double timeinseconds = (end.tv_nsec - start.tv_nsec);
  printf("\n%.5f nano seconds.\n", timeinseconds);
  return 0;
}

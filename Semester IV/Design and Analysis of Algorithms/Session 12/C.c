#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "H.h"

double time_elapsed(struct timespec *start, struct timespec *end);

int main()
{
  struct timespec start1, end1, start2, end2;
  double difference;

  int **A1;
  int n1;
  scanf("%d", &n1);
  A1 = (int **)malloc(sizeof(int *) * n1);
  for (int i = 0; i < n1; i++)
  {
    A1[i] = (int *)malloc(sizeof(int) * n1);
  }
  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n1; j++)
    {
      scanf("%d", &A1[i][j]);
    }
  }

  int **A2;
  int n2;
  scanf("%d", &n2);
  A2 = (int **)malloc(sizeof(int *) * n2);
  for (int i = 0; i < n2; i++)
  {
    A2[i] = (int *)malloc(sizeof(int) * n2);
  }
  for (int i = 0; i < n2; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      scanf("%d", &A2[i][j]);
    }
  }

  clock_gettime(CLOCK_REALTIME, &start1);
  transitive_closure_warshalls(A1, n1);
  clock_gettime(CLOCK_REALTIME, &end1);
  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n1; j++)
    {
      printf("%d ", A1[i][j]);
    }
    printf("\n");
  }

  clock_gettime(CLOCK_REALTIME, &start2);
  all_pairs_shortest_path_distances_floyds(A2, n2);
  clock_gettime(CLOCK_REALTIME, &end2);
  for (int i = 0; i < n2; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      printf("%d ", A2[i][j]);
    }
    printf("\n");
  }

  printf("%lf sec\n", time_elapsed(&start1, &end1));
  printf("%lf sec\n", time_elapsed(&start2, &end2));
}
double time_elapsed(struct timespec *start, struct timespec *end)
{
  double t;
  t = (end->tv_sec - start->tv_sec);                  // diff in seconds
  t += (end->tv_nsec - start->tv_nsec) * 0.000000001; //diff in nanoseconds
  return t;
}

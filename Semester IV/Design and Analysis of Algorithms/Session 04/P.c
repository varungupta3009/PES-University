#include <stdio.h>

// Get the next permutation in lexicographic order
int get_next_permutation(int *permutation, int n) {
	int i;
	int j;
	int k;
	int temp_int;
	int swaps;

	//find i
	for(i = n-2; i >= 0; i--) {
		if(permutation[i] < permutation[i+1]) {
			break;
		}
	}
	if(i == -1) {
		return 0;
	}

	for(j = i+1; j < n; j++) {
		if(permutation[j] < permutation[i]) {
			break;
		}
	}
	j--;

	temp_int = permutation[i];
	permutation[i] = permutation[j];
	permutation[j] = temp_int;

	swaps = (n-1-i)/2;
	for(k = 0; k < swaps; k++) {
		temp_int = permutation[i+1+k];
		permutation[i+1+k] = permutation[n-1-k];
		permutation[n-1-k] = temp_int;
	}
	return 1;
}

//Finds a solution for the traveling salesman problem
//Returns the cost of a min-cost Hamiltonian circuit of the given
//directed complete graph with n vertices in the form a cost matrix.
int tsp(int n, int graph[n][n]) {
  //Create Permutation Array
  int P[n-1];
  for(int i = 1; i < n; i++) {
		P[i-1] = i;
	}
  int M[n];
  M[0] = 0;
  //Loop through
  long int mincost = 9999999999;
  do {
    int cost = graph[0][P[0]];
    cost += graph[P[n-2]][0];
    for (int i = 0; i < n-2; i++) {
      cost += graph[P[i]][P[i+1]];
    }
    if (cost < mincost) {
      mincost = cost;
      for (int i = 1; i < n; i++) {
        M[i] = P[i-1];
      }
    }
  } while(get_next_permutation(P, n-1));
  for (int i = 0; i < n; i++) {
    printf("%d ", M[i]);
  }
  printf("0\n");
  return mincost;
}

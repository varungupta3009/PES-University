#include <string.h>
#include <stdio.h>
/*int *strmatch_patterns(char *text, char **patterns, int t) {
  // not in use
  return 0;
}*/

int strmatch_pattern(char *text, char *pattern) {
  int n = strlen(text), m = strlen(pattern), i, j;
  if(m > n) printf("The pattern is longer than the text.\n");
  for(i = 0; i < n-m+1; i++) {
    j = 0;
    while(j < m && (pattern[j] == text[i+j])) j++;
    if(j == m) return i;
  }
  return -1;
}

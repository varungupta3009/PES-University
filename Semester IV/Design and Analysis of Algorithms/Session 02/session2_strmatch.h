//Header file for session2_strmatch.c

//Search for the first occurrences each of t patterns in text
//Returns an array of 0-based indexes of the first occurrence of each pattern in the text.
//Returns -1 if pattern not found.
//int *strmatch_patterns(char *text, char **patterns, int t);

//Search for the first occurrence of a pattern in text
//Returns 0-based indexe of the first occurrence of a pattern in the text.
//Returns -1 if pattern not found.
int strmatch_pattern(char *text, char *pattern);

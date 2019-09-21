#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int *horspools_strmatch_patterns(char *, char **, int );
int horspools_strmatch_pattern(char *, char *);

int main()
{
	int* present;
	char* text=(char*)malloc(sizeof(char)*1024*1024);
	scanf("%[^\n]*c",text);
	
	int n;
	scanf("%d",&n);
	
	char** pattern;
	pattern=malloc(sizeof(char*)*n);
	
	char* temp=(char*)malloc(sizeof(char)*1024*1024);
	
	for(int i=0;i<n;i++)
	{
		pattern[i]=(char*)malloc(sizeof(char)*1024*1024);
		scanf(" %[^\n]*c",temp);
		strcpy(pattern[i],temp);
	}
	
	
	struct timespec start,end;
	clock_gettime(CLOCK_REALTIME,&start);
	present = horspools_strmatch_patterns(text,pattern,n);
	clock_gettime(CLOCK_REALTIME,&end);
	
	for(int i=0;i<n;i++)
		printf("%d\n",present[i]);
	printf("%lds %ldns\n",(end.tv_sec-start.tv_sec),(end.tv_nsec-start.tv_nsec));
	
	return 0;
}

int *horspools_strmatch_patterns(char *text, char **patterns, int t)
{
	int *occurance=(int*)malloc(sizeof(int)*t);
	for(int i=0;i<t;i++)
		occurance[i]=horspools_strmatch_pattern(text, patterns[i]);
	return occurance;
}

int horspools_strmatch_pattern(char *text, char *pattern)
{
	int text_len = strlen(text);
	int pattern_len = strlen(pattern);
	int  i;
	
	int *table = (int*)malloc(sizeof(int)*300);
	
	for(i = 0 ; i<300; i++)
		table[i] = pattern_len;

	for(i = 0 ; i<pattern_len-1 ; i++)
		table[pattern[i]] = pattern_len-1-i;
	
	i = pattern_len - 1 ;
	int j = 0 ;
	
	while(i < text_len)
	{
		j = 0;
		while(j<pattern_len && text[i-j] == pattern[pattern_len-1-j])
			j = j + 1;
		if(j == pattern_len)
			return i-(pattern_len-1);
		i = i + table[text[i]];	
	}
	return -1; 
}
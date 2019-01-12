#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fin=fopen("matches.csv","r");
	char *tok;
	int count=0;
	char ch[2000];
	while(fgets(ch,2000,fin)!=NULL)
	{
		tok=strtok(ch,",");
		int c=1;
		while(tok!=NULL && c<2)
		{
			tok=strtok(NULL,",");
			c++;
		}
		if(strcmp(tok,"2008")==0)
		{
			count++;
		}
	}
	printf("A total of %d matches have been played in the year 2008\n",count);
	return 0;
}

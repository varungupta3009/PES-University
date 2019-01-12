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
		while(tok!=NULL && c<3)
		{
			tok=strtok(NULL,",");
			c++;
		}
		if(strcmp(tok,"Kolkata")==0)
		{
			count++;
		}
	}
	printf("A total of %d matches have been played at Eden Gardens, Kolkata\n",count);
	return 0;
}

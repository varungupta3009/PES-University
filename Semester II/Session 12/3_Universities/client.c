#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fin=fopen("Universities.csv","r");
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
		if(strcmp(tok,"India")==0)
		{
			count++;
		}
	}
	printf("A total of %d Universities are there in INDIA\n",count);
	return 0;
}

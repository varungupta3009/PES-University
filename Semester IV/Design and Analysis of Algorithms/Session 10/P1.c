#include<stdio.h>
#include<stdlib.h>

void distrisort(int*a,int*count,int *ref,int n);
int* inputarray(int*a,int*b,int n);
void printarray(int*a,int n);
int main()
{
	int n;
	scanf("%d",&n);
	int*a=(int*)malloc(sizeof(int)*n);
	int*b=(int*)malloc(sizeof(int)*n);
	int *p=inputarray(a,b,n);
	int *count=(int*)calloc(p[1]-p[0]+1,sizeof(int));
	distrisort(a,count,p,n);
}
	




void distrisort(int*a,int*count,int *ref,int n)
{
	int*ans=(int*)malloc(sizeof(int)*n);
	int min=ref[0];
	int max=ref[1];
	for(int i=0;i<n;i++)
	{
		count[a[i]-min]++;
	}
	
	for( int i=1;i<(ref[1]-ref[0]+1);i++)
	{
		count[i]=count[i-1]+count[i];
	}
	//printarray(count,ref[1]-ref[0]+1);
	
	for(int i=0;i<n;i++)
	{
		
		ans[count[a[i]-min]-1]=a[i];
		count[a[i]-min]--;
	}
	
	printarray(ans,n);
	
} 

int* inputarray(int*a,int*b,int n)
{
	
	int min=999999;
	int max=-999999;
	
	for( int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		//scanf("%lld",&in);
		/*if(i==0)
		{
			min=a[0];
			max=a[0];
			//printf("okk  %ld %ld\n",min,max);
		}
		*/
		b[i]=a[i];
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
		//printf("okk  %d %d %d\n",min,max,a[i]);
		
			
	}
	int *ref=( int *)malloc(sizeof(int)*2);
	ref[0]=min;
	ref[1]=max;
	
	return ref;
}
	
void printarray(int*a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
#include "stdio.h"
#include "stdlib.h"
#define N 10

void fun(int a[])
{
	int i,j,p,t;
	for(i=0;i<N;i++)
	{
		p=i;
		for(j=i+1;j<N;j++)
			if(a[j]<a[p])
				p=j;
		if(p!=i)
		{
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
}

int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%d ",a[i]);
	}

	fun(a);	

	printf("\n\n\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
		
	return 0;
}

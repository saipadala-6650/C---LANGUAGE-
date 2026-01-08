#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int pass,t;
	for(pass=0;pass<n-1;pass++)
	{
		
	printf("%d) out pass:",pass+1);
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])//5 4 3 2 1
		{
			 t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	}
	
	
}
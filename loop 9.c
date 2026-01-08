#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int count=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		count++;
		}
	}
	printf("\nTOTAL:%d",count);
}
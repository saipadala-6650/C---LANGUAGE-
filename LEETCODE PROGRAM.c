#include<stdio.h>
int main()
{
	int tar,n;
	scanf("%d%d",&tar,&n);
	int i,j,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	
	{
		if(arr[i]+arr[j]==tar)
		{
			printf("[%d,%d]",i,j);
		}
	}
}
}
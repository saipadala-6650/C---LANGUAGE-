#include<stdio.h>
int sum(int i,int *ptr[i],int n,int tar)
{
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]+ptr[j]==tar)
			{
				return i,j;
			}
		}
	}
}
int main()
{
	int n,i,j,tar;
	scanf("%d%d",&tar,&n);
	int *ptr[i],arr[n];
	ptr[i]=&arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr[i]);
	}
	sum(ptr[i],n,tar);
	printf("[%d,%d]",i,j);
}
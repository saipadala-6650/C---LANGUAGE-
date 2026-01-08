#include<stdio.h>
int prime(int);
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int res=prime(n);
	if(res==2)
	{
		printf("%d ",res);
	}
	else
	{
		printf("HII");
	}	
}
int prime(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(n%i==0)
		{
			return 2;
		}
	else
	{
		return 0;
	}
}
}
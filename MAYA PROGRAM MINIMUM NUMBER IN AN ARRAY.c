#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n],min=arr[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[0];
		}
		
	}
	printf("%d",min);

}
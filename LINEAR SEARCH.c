#include<stdio.h>
int main()
{
	int n,key;
	scanf("%d%d",&n,&key);
	int i,arr[n], flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Element found");
	}
	else
	{
		printf("NOT found");
	}
}
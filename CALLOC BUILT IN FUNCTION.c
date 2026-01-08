#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *ptr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter %d integer ",i+1);
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
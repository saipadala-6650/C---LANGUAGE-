#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter no.of integers:");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter %d integer ",i+1);
		scanf("%d",ptr+i);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{	
		sum=sum+*(ptr+i);
	}
	printf("%d",sum);
}
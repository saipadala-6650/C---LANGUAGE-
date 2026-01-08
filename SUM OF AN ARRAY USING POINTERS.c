#include<stdio.h>
void sum(int *ptr,int n)//*ptr<=>ptr=&arr[i]
{
	int sum=0,i;
	printf("%d\n",ptr);
     for(i=0;i<n;i++)
     {
     	sum=sum+*(ptr+i);
	 }
	 printf("%d",sum);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d----->%d\n",&arr[i],arr[i]);
	}
	printf("%d\n",arr);
	sum(arr,n);
}
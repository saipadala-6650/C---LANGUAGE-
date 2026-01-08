#include<stdio.h>
int main()
{
	int i=0,j=4,arr[5]={10,20,30,40,50};
	while(i<j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
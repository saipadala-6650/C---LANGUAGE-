#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<rows;i++)
	{	int sum=0;	
		for(j=0;j<cols;j++)
		{
			
				sum=sum+arr[j][i];//for column vise we can write arr[j][i];
		   
		}
		 printf("%d ",sum);
	}
}
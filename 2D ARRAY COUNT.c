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
	int sum=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr[i][j];
		}
	}
	int k,l;
	for(k=0;k<rows;k++)
	{
		for(l=0;l<cols;l++)
		{
			arr[k][l];
		}
	}
	sum=arr[i][j]+arr[k][l];
	printf("%d",sum);
	/*for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			
		}
	}*/
}
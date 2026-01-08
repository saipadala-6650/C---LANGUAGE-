#include<stdio.h>
int main()
{
	int i,j,row,cols;
	scanf("%d%d",&row,&cols);
	int arr[row][cols];
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int temp;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			if((i+j)==(row-1))
			{
				printf("%d ",arr[i][j]);
			}
		}
	
	}
	
	
	
}
#include<stdio.h>
int main()
{
	int i,j,row,cols;
	printf("Enter the row and cols size:");
	scanf("%d%d",&row,&cols);
	int arr[row][cols];
	printf("Read the array elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//printf("Convert it into matrix form");
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("|%d| ",arr[i][j]);
		}
		printf("\n");
	}
}
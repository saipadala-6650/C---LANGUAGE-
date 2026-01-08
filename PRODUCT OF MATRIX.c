#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	printf("Enter the sizes:\n");
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("First matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int k,l,r,c;
	printf("Second matrix sizes:\n");
	scanf("%d%d",&r,&c);
	int sec[r][c];
	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			scanf("%d",&sec[k][l]);
		}
	}
	printf("Second matrix:");
		for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			printf("%d ",sec[k][l]);
		}
		printf("\n");
	}
		printf("Multiplication:\n");	
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("%d " ,arr[i][j]*sec[k][l]);
			}
			printf("\n");
		}
}
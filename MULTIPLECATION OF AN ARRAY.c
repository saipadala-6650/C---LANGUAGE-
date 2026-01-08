#include<stdio.h>
int main()
{
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int arr[r1][c1];
	int i,j,k;
	printf("Enter the matrix 1:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int r2,c2;
	scanf("%d%d",&r2,&c2);
	int brr[r2][c2];
	printf("Enter the matrix 2:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
	int sum;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		
		{
			 sum=0;
			for(k=0;k<r2;k++)
			{
				sum=sum+(arr[i][k]*brr[k][j]);
			}
			printf("%d ",sum);
	}
	printf("\n");
	}
	
		
	
	
}
#include<stdio.h>
void matrixmul(int i,int j,int a[i][j],int b[i][j],int r1,int c1,int r2,int c2)
{
		int sum;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		sum=0;
		{
			for(int k=0;k<r2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
		}
		printf("%d ",sum);
	}
	printf("\n");

	
}
int main()
{
	
void matrixmultiplication()
{
	int r1, c1,r2,c2;
	printf("Enter size of 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter size of 2nd matrix:");
	scanf("%d%d",&r2,c2);
	int a[r1][c1],b[r2][c2],i,j,k;
	printf("Enter elements in 1st matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 1st matrix is:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
printf("Enter elements in 2nd matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}	
	printf("The second matrix is:");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	matrixmultiplication(a[i][j],b[i][j]);
	
	
	
}}
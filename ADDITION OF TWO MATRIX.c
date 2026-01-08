#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,arr[n][m];
	printf("Enter the matrix 1:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sec[n][m];
	printf("Enter the matrix 2:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&sec[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			{
				printf("%d ",arr[i][j]+sec[i][j]);
			}
			
			
		}
		printf("\n");
		
	}
}
#include<stdio.h>
int main()
{
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int arr[r1][c1];
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
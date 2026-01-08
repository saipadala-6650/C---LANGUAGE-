#include<stdio.h>
int main()
{
	int i,j,r1,c1;
	scanf("%d%d",&r1,&c1);
	int fir[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&fir[i][j]);
		}
	}
	int k,l,r2,c2;
	scanf("%d%d",&r2,&c2);
	int sec[r2][c2];
	for(k=0;k<r2;k++)
	{
		for(l=0;l<c2;l++)
		{
			scanf("%d",&sec[k][l]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			int sum=0;
			for(k=0;k<r2;k++)
			{
				sum=sum+fir[i][k]*sec[k][j];
			}
		printf("%d ",sum);
		}
		printf("\n");
			
	}

	
}
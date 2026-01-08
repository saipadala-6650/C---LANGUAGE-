#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int i,j;
	int row[i];
	int col[j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0)
			{
				row[i]=1;//flag
				col[j]=1;//flag
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(row[i]==1||col[j]==1)   //row[i]==1||col[j]==1
			{
				a[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
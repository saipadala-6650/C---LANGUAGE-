#include<stdio.h>
int con(int);

int main()
{
	int n;
	scanf("%d",&n);
	int res=con(n);
	if(res==1)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
	
}
int con(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
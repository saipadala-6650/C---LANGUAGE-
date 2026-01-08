#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		if(n%4==0)
		{
			printf("GOOD");
		}
		else
		{
			printf("NOT GOOD");
		}
	}
}
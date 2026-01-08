#include<stdio.h>
int main()
{
	int a=5+2;
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("Not a prime");
	}
}
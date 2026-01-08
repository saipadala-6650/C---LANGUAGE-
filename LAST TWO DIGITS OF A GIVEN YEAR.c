#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int r,c=1;
	while(n!=0)
	{
		r=n%100;
		c=c*r;
		n=n/10;
		
	}
	printf("%02d",c);
}
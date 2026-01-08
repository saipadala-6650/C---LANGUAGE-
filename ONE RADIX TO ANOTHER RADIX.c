#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c,result=0;
	printf("Type of conversion:");
	scanf("%d",&c);
	while(n!=0)
	{
		int r=n%c;
		result=result*10+r;
		n=n/10;
	}
	printf("%d",result);
}
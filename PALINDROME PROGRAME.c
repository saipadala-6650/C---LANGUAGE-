#include<stdio.h>
int main()
{
	int n,r,res=0;
	scanf("%d",&n);
	int c=n;
	while(n!=0)
	{
		r=n%10;
		res=res*10+r;
		n=n/10;
	}
	if(res==c)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
// swapping of two numbers
//approach 1:-using temporary variable:
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swapping: %d %d\n",a,b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("After swapping: %d %d",a,b);
}
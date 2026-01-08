#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int profit=y-x;
	int cent;
	cent=(profit/x)*100;
	printf("%d",cent);
}
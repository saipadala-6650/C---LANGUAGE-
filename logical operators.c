#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int logic;
	logic=((a!=b)&&(c>=b)||((c!=b)&&(b!=2000)))&&(a==c);
	printf("%d",logic);
}
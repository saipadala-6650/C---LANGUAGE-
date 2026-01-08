#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%%d%d%d",&a,&b,&c,&d,&e);
	int p;
	p=((a<=b)||(c>=d)||(d<e));
	printf("%d",p);
}
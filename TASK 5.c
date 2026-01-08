#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("convert a and b into binary values:");
	int c,d,e,f,g;
	c=(a&b);
	d=(a|b);
	e=(a^b);
	f=(a<<b);
	g=(a>>b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d\n",g);
}
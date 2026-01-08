#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d;
	d=(a>=b)&&(b==a)||(!(c>b))&&(a<=c)&&(!(a>c));
	printf("%d",d);
}
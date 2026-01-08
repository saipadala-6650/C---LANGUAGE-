#include<stdio.h>
int add(int ,int);

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float res=add(10,20);
	printf("%.2f",res);
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
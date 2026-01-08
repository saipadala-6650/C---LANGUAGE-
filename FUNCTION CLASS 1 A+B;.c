#include<stdio.h>
int add(int ,int);//FUNCTION DECLARATION:
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=add(a,b);//FUNCTION CALL;
	printf("%d",res);
}
int add(int x,int y)//FUNCTION DEFINATION:
{
	int c=x+y;
	return c;
}
#include<stdio.h>
//add(int ,int );//function prototype
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);//function call:
	
}
add(int a ,int b)
{
	printf("%d",a+b);
}

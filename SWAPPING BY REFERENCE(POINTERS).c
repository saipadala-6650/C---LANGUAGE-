#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
	printf("after the swapping:%d %d\n",*a,*b);
}
int main()
{
	int a=10,b=20;
	printf("before the swapping:%d %d\n",a,b);
	swap(&a,&b);
	printf("after the swaping:%d %d\n",a,b);
}
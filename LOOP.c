#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<30)
	printf("THE SPEED IS %d SO:GOOD",a);
	else if(a<=60)
	printf("THE SPEED IS %d SO :FAST",a);
	else
	printf("THE SPEED IS %d SO :VERYFAST",a);
}
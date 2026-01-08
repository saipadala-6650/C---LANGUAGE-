//find the area of rectangle
#include<stdio.h>
int main ()
{
	int length,breadth;
	scanf("%d%d",&length,&breadth);
	int perimeter,area;
	perimeter=2*(length+breadth);
	area=length*breadth;
	printf("perimeter of rectangle is:%d\n",perimeter);
	printf("area of rectangle is:%d",area);
	
}
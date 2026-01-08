#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	float area;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("AREA OF A TRIANGLE IS:%.2f",area);
}
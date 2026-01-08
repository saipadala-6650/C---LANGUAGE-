#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	int distance;
	distance=sqrt((x2-x1)+(y2-y1));
	printf("%d",distance);
}
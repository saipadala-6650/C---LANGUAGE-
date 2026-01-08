#include<stdio.h>
void loop(int);

int main()
{
	int n;
	scanf("%d",&n);
	loop(n);
	

}
void loop(int n)
{
	int i;
	for(i=n;i>=1;i--)
	{
		printf("%d ",i);
		}	
		
}
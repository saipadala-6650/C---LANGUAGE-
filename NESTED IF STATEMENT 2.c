#include<stdio.h>
int main()
{
	int age,m;
	scanf("%d%d",&age,&m);
	if(age>=18)
	{
		if(m<200000)
		{
			printf("ELIGIBLE");
		}
		else
		{
			printf("NOT ELIGIBLE");
					}
					
	}
	else
	{
		printf("NO LOAN ");
	}
}
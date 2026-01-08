#include<stdio.h>
int main()
{
	int var;
	scanf("%d",&var);
	switch(var)
	{
		case 1:
			printf("number is 1");
			break;
		case 2:
			printf("number is 2");
			break;
			case 3:
				printf("number is 3");
				break;
				default:
					printf("Invalid input");
		}	
}
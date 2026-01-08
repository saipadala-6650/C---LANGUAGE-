#include<stdio.h>
#include<string.h>
int main()
{
	char str[200]="aditya123";
	int i,len=strlen(str),sum=0;
	for(i=0;i<len;i++)
	{
		if(isdigit(str[i]))
	sum=sum+((int)str[i]-48);	
	}
	printf("%d",sum);
}
#include<stdio.h>
#include<string.h>
int main()
{
	int str[20];
	scanf("%s",str);
	int i,cnt=0;
	for(i=0; str[i]!='\0' ;i++)
	{
		cnt++;
	}
	printf("%d",cnt);
	
}
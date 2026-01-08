#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	int res=strcmp(str1,str2);
	printf("%d",res);
	
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	char str2[10];
	int i,len;
	len=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
	str2[i]=str[i];
 }
 //str2[len]='\0';
	printf("String is:%s",str2);
}
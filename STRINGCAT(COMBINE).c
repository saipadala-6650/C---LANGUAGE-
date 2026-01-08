#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	scanf("%[^\n]s ",str1);
	scanf(" %[^\n]s",str2);
	strcat(str1,str2);
	printf("The combined string is:\n");
	printf("%s",str1);
}
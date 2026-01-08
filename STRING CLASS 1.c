#include<stdio.h>
int main()
{
	char str[5];
	printf("Enter a string:\n");
	scanf("%[^\n]s",&str);
	printf("The string is:");
	int len=sizeof(str);
//	printf("%s\n",str);
	printf("%d",len);
}
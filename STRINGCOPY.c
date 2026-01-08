// string functions:modifications;
#include<stdio.h>
#include<string.h>
int main()
{
	char source[20];
	char dest[20];
	scanf("%[^\n]s",source);
	strcpy(dest,source);
	printf("The Destination string is:\n");
	printf("%s",dest);
}

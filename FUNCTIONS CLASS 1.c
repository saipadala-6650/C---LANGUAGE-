#include<stdio.h>
char add(char);

int main()
{
	char ch;
	scanf("%c",&ch);
	int res=add(ch);
	printf("%d",res);
	
}
char add(char ch)
{
	return ch;
}
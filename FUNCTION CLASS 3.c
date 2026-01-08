#include<stdio.h>
char sai(char);

int main()
{
	char ch;
	scanf("%c",&ch);
	int res=sai(ch);
	printf("%d",res);
}
char sai(char ch)
{
	return ch;
}
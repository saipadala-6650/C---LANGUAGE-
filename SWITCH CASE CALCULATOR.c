#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	scanf("%c",&ch);
	scanf("%d%d",&a,&b);
	
	
	switch(ch)
	{
		case '+':c=a+b;
			printf("%d ",c);
			break;
		case '-':c=a-b;
		printf("%d ",c);
		break;
		case '*':c=a*b;
		printf("%d ",c);
		break;
		case '/':c=a/b;
		printf("%d ",c);
		break;
		case '%':c=a%b;
		printf("%d ",c);
		break;
	}
}
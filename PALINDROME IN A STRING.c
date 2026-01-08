#include<stdio.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int i,res=0;
	while(str[i]!='\0')
	{
		int r =str[i]%10;
		res=res+r;
		str[i]=str[i]/10;
	}
	printf("%s",res);
}
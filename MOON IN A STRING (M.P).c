#include<stdio.h>
#include<string.h>
int main()
{
	char str[104];
	scanf("%[^\n]s",str);
	int c=0,s=0,i,l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='1')
		{
			c++;
		}
		else
		{
			s++;
		}
	}
	if(c>s)
	{
		printf("GOGI");
	}
	else
	{
		printf("KIDDIOO");
	}
}
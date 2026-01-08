#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
			
			
		}
		printf("%s",str[i]);
	}
	
	
}
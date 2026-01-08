#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
	scanf("%[^\n]s",str);
	int len=strlen(str),i=0,j=len-1,flag=0;
	while(i<j)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			
		}
		i++;
		j--;
	}
	if(flag==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
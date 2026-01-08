#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n];
	int i;
	for(i=0;i<n;i++)
	{
	scanf("%s",str[i]);
}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
			
		}
	}
	printf("%s",str);
}
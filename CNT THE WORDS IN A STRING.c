#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	scanf("%[^\n]s",str);
	int i,cnt=1,l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			cnt++;
		}
	}
	printf("%d",cnt);
}
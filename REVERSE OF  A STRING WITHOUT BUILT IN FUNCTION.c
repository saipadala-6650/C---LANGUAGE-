#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	int len=strlen(str);
	int i=0,j=len-1;
	while(i<=j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("%s",str);

}
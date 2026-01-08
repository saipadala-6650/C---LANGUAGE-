#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="heLLo worlD";
//	strlwr(str);//OUT PUT:hello world
//	strupr(str);//out put:HELLO WORLD.
	strrev(str);//out put:reverse.
	printf("%s",str);
}
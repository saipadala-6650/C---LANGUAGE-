#include<stdio.h>
int main()
{
	int binary;
	printf("Enter a binary value");
	scanf("%d",&binary);
	int decimal=0,weight=1,rem=0;
	while(binary!=0)
	{
		int r=binary%10;
		decimal+=r*weight;
		binary=binary/10;
		weight*=2;
	}
	printf("Decimal value of binary number is :%d",decimal);
	
}
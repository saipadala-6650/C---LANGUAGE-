#include<stdio.h>
int  main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	int base;
	printf("enter base");
	scanf("%d",&base);
	  if (base < 2 || base > 36) {
        printf("Base must be between 2 and 36.\n");
        return 1;
    }

    // Special case for 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }
	char res[50];
	int i=0;
	while(num>0)
	{
		int r=num%base;
		
		if(r<10)
		{
			res[i]='0'+r;
			
		}
		else
		{
			res[i]='A'+(r-10);
		}
		i++;
		num=num/base;
		
	}
	printf("Converted number:\n");
	for(int j=i-1;j>=0;j--)
	{
		printf("%c ",res[j]);
	}
}
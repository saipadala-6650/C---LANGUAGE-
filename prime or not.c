#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int f=0;
    int i=0;
    while(num>0)
    {
        if(num%i==0)
        {
            f=f+1;
        }
        i++;
        
    }
    if(f==2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
     return 0;
}

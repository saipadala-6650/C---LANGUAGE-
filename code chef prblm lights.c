/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t++)
    {
       int i,n;
    scanf("%d",&n);
     int r,b,y,arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                r++;
            }
            else if(arr[i]==2)
            {
                b++;
            }
            else
            {
                y++;
            }
        }
        if(r==(b+y) || b==(r+y))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        
    }
    
}*/
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Number of lights

        int C[N];
        int count_red = 0, count_blue = 0, count_undecided = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &C[i]);
            if (C[i] == 1)
                count_red++;
            else if (C[i] == 2)
                count_blue++;
            else
                count_undecided++;
        }

        if (N % 2 != 0) {
            printf("No\n");
            continue;
        }

        int half = N / 2;
        int needed_red = half - count_red;
        int needed_blue = half - count_blue;

        if (needed_red >= 0 && needed_blue >= 0 && needed_red + needed_blue == count_undecided)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

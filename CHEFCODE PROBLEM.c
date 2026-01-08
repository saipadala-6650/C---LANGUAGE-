#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                  if(d[i]<=d[j])
            {
                flag++;
            }
            
            } 
        }
        if(flag==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    

    
    }
}

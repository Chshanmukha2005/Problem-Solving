#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y,i,total = 0,total1 = 0;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for ( i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(i=0;i<n;i++)
        {
           total = total+a[i];
            
        }
        for( i = 0;i<n;i++)
        {
            if(a[i]>y)
            {
                total1 = total1+(a[i]-y);
            }
           
        }
        if(total<=total1+x)
        {
            printf("NO COUPON\n");
        }
        else
        {
            printf("COUPON\n");
        }
    }

    return 0;
}

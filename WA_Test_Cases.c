#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n,i;
        scanf("%d", &n);
        int s[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &s[i]);
        }
        char v[n+1];
        scanf("%s", v);
        int min = 600;
        // your code goes here
        for(i =0 ;i<n; i++)
        {
            if(v[i]== '0')
            {
                if(s[i]<=min)
                {
                    min = s[i];
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}

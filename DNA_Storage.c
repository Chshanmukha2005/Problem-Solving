#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int n1;
        scanf("%d",&n1);
        char a[n1];
        scanf("%s",a);
        int i;
        for(i=0;i<n1;i+=2)
        {
            if(a[i]=='0' && a[i+1]=='0')
            {
                printf("A");
            }
            else if(a[i]=='0' && a[i+1]=='1')
            {
                printf("T");
            }
            else if(a[i]=='1' && a[i+1]=='0')
            {
                printf("C");
            }
            else if(a[i]=='1' && a[i+1]=='1')
            {
                printf("G");
            }
            
        }
        printf("\n");
    }
}
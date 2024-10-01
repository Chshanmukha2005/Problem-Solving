#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int n1,i,a=0,b=0;
        char arr[1000] , p= 'A';
        scanf("%d",&n1);
        scanf("%s",arr);
        for(i=0;i<n1;i++)
        {
            if(arr[i] == 'A' && p == 'A')
            {
                a++;   
            }
            else if(arr[i] == 'A' && p == 'B')
            {
                 p = 'A';
            }
            else if(arr[i] == 'B' && p == 'B') 
            {
                b++;
            }
            else if( arr[i] == 'B' && p == 'A')
            {
                p = 'B';
            }
            
        }
        printf("%d %d\n",a,b);
    }
}
#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        char a[100];
        int c=0,n=0,sum=0;
        scanf("%s",a);
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='C')
            c++;
            else if(a[i]=='N')
            n++;
            else if(a[i]=='D')
            {
                c++;
                n++;
            }
        }
         if(c>n)
            {
                sum=60*x;
            }
        else if(c<n)
        {
            sum=40*x;
        }
        else if(c==n)
        {
            sum=55*x;
        }
        printf("%d\n",sum);
    }
}


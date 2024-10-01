#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int n1;
	    scanf("%d",&n1);
	    char a[n1];
	    scanf("%s",a);
	    int flag=0;
	    for(int i=0;i<n1;i++)
	    {
	        if(a[i]==a[i+1])
	        flag++;
	    }
	    printf("%d\n",flag);
	}

}


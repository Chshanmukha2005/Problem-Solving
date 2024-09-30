#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    char a[6],b[6];
	    scanf("%s %s",a,b);
	    for(int i=0;i<5;i++){
	        if(a[i]==b[i])
	        printf("G");
	        else
	        printf("B");
	    }
	    printf("\n");
        

	}

}


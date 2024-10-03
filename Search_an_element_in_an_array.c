#include <stdio.h>

int main(void) {
	int N, X;
	scanf("%d  %d", &N, &X);
	int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
	int flag=0;
	
	for(int i=0; i<N; i++){
	    if(A[i]==X){
	        printf("YES");
	        flag=1;
	        break;
	    }
	}
	if(flag==0){
	    printf("NO");
	}

}


#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c,min;
        scanf("%d %d %d", &a, &b, &c);
        // your code goes here
    min = (a<b)?(a<c?a:c):(b<c?b:c);
    if(min == a)
    {
        printf("Alice\n");
    }
    else if(min == b)
    {
        printf("Bob\n");
    }
    else
    {
        printf("Charlie\n");
    }
    }
    return 0;
}

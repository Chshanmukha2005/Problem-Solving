#include <stdio.h>
#include <string.h>


int isValidParenthesis(const char *S) 
{
    int balance = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == '(') 
        {
            balance++;
        } 
        else if (S[i] == ')') 
        {
            if (balance == 0) 
            {  
                return 0;
            }
            balance--;
        }
    }
    return balance == 0;  
}

int main(void) 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        char S[100001]; 
        scanf("%s", S);
        printf("%d\n", isValidParenthesis(S));
    }
    return 0;
}
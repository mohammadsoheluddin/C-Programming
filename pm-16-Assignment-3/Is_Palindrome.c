#include<stdio.h>
#include<string.h>

char is_palindrome(char S[])
{
    int length = strlen(S);
    int ans = 1;
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if(S[i] != S[j]){
            ans = 0;
            break;
        }
    }
    return ans;
}
int main()
{
    char S[1001];
    scanf("%s",&S);
    
    int ans = is_palindrome(S);
    if(ans == 1){
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}
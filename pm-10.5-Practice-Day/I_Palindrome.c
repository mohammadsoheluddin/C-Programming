#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s",&str);
    int length = strlen(str);

    int ans = 1;
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if(str[i] != str[j]){
            ans = 0;
            break;
        }
    }
    if(ans == 1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
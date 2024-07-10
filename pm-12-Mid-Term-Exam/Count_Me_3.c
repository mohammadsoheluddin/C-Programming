#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);

    for(int t = 0; t < T; t++)
    {
        char s[10001];
        scanf("%s",s);

        int capital = 0;
        int small = 0;
        int digit = 0;

        for(int k = 0; k < strlen(s); k++)
        {
            if(s[k] >= 65 && s[k] <= 90)
            {
                capital++;
            }
            if(s[k] >= 97 && s[k] <= 122)
            {
                small++;
            }
            if(s[k] >= 48 && s[k] <= 57)
            {
                digit++;
            }
        }
        printf("%d %d %d\n",capital,small,digit);
    }
    return 0;
}
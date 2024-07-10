#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++) 
    {
        char str[101];  
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str);

        if (str[len - 1] == '\n') 
        {
            len--;  
        }

        if(len > 10)
        {
        char firstChar = str[0];
        char lastChar = str[len - 1];  
        int middleLen = len - 2;
        printf("%c%d%c\n", firstChar,middleLen,lastChar);
        } else 
        {
        printf("%s", str);
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%s",a);
    int i = 0, j = strlen(a) - 1;
    int flag = 1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    } 
    if(flag == 1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
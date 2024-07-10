#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    // scanf("%s",a);
    // int count = 0;
    fgets(a, sizeof(a), stdin); 
    int st = strlen(a);
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // for(int i = 0; a[i] != '\0';i++)
    // {
    //     count++;
    // }
    // printf("%d\n",count);
    printf("%d\n",st);
    return 0;
}
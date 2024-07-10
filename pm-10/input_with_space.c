#include<stdio.h>
#include<string.h>

int main()
{
    char a[21];
    // gets(a);
    fgets(a,23,stdin);
    a[21]='\0';
    printf("%s",a);
    return 0;
}
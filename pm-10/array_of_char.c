#include<stdio.h>

int main()
{
    char a[5];
    for(int i = 0; i < 5; i++){
        scanf("%c",&a[i]);
    }
    for(int i = 5; i >= 0; i--){
        printf("%c\n",a[i]);
    }
    printf("%d",sizeof(a));
    return 0;
}
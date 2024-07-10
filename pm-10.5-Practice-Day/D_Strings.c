#include<stdio.h>
#include<string.h>

int main() {
    char a[11], b[11];
    scanf("%s%s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);
    return 0;
}



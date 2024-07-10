#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);

    if (X >= 'a' && X <= 'z') {
        X -= 32;
        printf("%c\n", X);
    } else if (X >= 'A' && X <= 'Z') {
        X += 32;
        printf("%c\n", X);
    }
    return 0;
}

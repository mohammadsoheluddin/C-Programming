#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100]; // Providing enough space for input strings
    scanf("%s%s", a, b);

    int i;
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if (a[i] < b[i]) {
            printf("A is smaller than B.\n");
            break;
        } else if (a[i] > b[i]) {
            printf("A is bigger than B.\n");
            break;
        }
    }

    // If both strings are equal up to the length of the shorter string
    if (a[i] == '\0' && b[i] == '\0') {
        printf("A and B are equal.\n");
    } else if (a[i] == '\0') {
        printf("A is smaller than B.\n");
    } else {
        printf("B is smaller than A.\n");
    }

    return 0;
}

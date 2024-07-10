#include <stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Eating Burger");
    } else if(tk >= 50) {
        printf("Eating Bun");
    } else {
        printf("I'll will eat nothing.");
    }
    return 0;
}
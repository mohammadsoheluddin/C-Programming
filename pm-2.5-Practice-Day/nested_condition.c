#include <stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000){
        printf("I will go to Cox's Bazar.\n");
        if(tk >= 10000){
            printf("I'll also go to Saint Martin.\n");
        } else{
            printf("I'll back to home from Cox,s Bazar.\n");
        }
    } else {
        printf("I won't go anywhere.\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int money = 4000;
    if(money >= 10000){
        printf("Gucci Bag\n");
        if(money > 20000){
            printf("Gucci Belt");
        }
    }else if(money >= 5000) {
        printf("Levis Bag");
    } else {
        printf("Something");
    }
}
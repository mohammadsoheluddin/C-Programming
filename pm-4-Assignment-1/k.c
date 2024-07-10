#include<stdio.h>

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x <= y && x <= z){
        printf("%d ", x);
        if(y >= x && y >= z){
            printf("%d ", y);
        } else if(z >= x && z >= y){
            printf("%d ", z);
        }
    } else if(y <= x && y <= z){
        printf("%d ", y);
        if(x >= y && x >= z){
            printf("%d ", x);
        } else if(z >= x && z >= y){
            printf("%d ", z);
        }
    } else {
        printf("%d ", z);
        if(x >= y && x >= z){
            printf("%d ", x);
        } else if(y >= x && y >= z){
            printf("%d ", y);
        }
    }
    return 0;
}
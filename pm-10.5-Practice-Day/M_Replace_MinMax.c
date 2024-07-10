#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int minNumber = INT_MAX;
    int maxNumber = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for (int i = 0; i < n; i++)
    {   
        if(minNumber > ar[i]){
            minNumber = ar[i];
            minIndex = i;
        }
        if(maxNumber < ar[i]){
            maxNumber = ar[i];
            maxIndex = i;
        }
    }

    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    } 
    return 0;
}

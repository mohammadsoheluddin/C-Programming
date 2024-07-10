#include<stdio.h>

int main()
{
    long long int n, m, k;
    scanf("%lld%lld%lld",&n,&m,&k);
    long long int min = 0;
    if(n < m && n < k){
        min = n;
    }
    else if (m < n && m < k){
        min = m;
    } else {
        min = k;
    }

    long long int newEyes = (n-min)/2;
    long long int newMouths = m - min;
    long long int newBody = k - min; 

    if(newEyes <= newBody){
        printf("%lld", newEyes+min);
    } else if(newBody < newEyes){
        printf("%lld", newBody+min);
    }
    return 0;
}
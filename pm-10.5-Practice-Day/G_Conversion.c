#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char str[100001];  
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ',') {
            str[i] = ' ';
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}
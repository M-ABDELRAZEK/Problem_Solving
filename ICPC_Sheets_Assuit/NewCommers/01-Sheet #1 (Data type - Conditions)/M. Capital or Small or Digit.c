#include<stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if(x >= 48 && x <= 64)
        printf("IS DIGIT");
    else if(x >= 64 && x <= 96)
        printf("ALPHA\nIS CAPITAL");
    else if(x >= 97 && x <= 122)
        printf("ALPHA\nIS SMALL");

    return 0;
}
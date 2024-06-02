#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    num /= 100;
    if(num >= 10)
        num /= 10;
    
    if(num % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}
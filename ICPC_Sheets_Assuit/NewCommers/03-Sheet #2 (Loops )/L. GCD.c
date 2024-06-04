#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, GCD = 1;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= __min(a, b); i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    printf("%d", GCD);
    
    return 0;
}
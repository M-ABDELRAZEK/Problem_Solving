#include<stdio.h>

int main()
{
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    if(((A % 100) * (B % 100) * (C % 100) *( D % 100)) % 100 >= 10)
        printf("%d", ((A % 100) * (B % 100) * (C % 100) *( D % 100)) % 100);
    else
        printf("0%d", ((A % 100) * (B % 100) * (C % 100) *( D % 100)) % 100);
    return 0;
}
#include <stdio.h>

int main()
{
    long A, B;

    scanf("%ld %ld", &A, &B);

    if(A % B == 0 || B % A == 0)
        printf("Multiples");
    else 
        printf("No Multiples");
    
    return 0;
}
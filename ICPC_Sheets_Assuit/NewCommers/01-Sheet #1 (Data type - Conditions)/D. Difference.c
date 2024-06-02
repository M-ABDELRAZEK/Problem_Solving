#include <stdio.h>

int main()
{
    long long X, Y, U, V;

    scanf("%lld %lld %lld %lld", &X, &Y, &U, &V);

    printf("Difference = %lld", (X * Y) - (U * V));

    return 0;
}
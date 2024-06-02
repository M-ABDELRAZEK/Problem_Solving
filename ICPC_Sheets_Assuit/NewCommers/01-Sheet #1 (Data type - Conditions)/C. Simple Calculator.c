#include <stdio.h>

int main()
{
    long long X, Y;

    scanf("%d %d", &X, &Y);

    printf("%lld + %lld = %lld\n", X, Y, X + Y);
    printf("%lld * %lld = %lld\n", X, Y, X * Y);
    printf("%lld - %lld = %lld\n", X, Y, X - Y);

    return 0;
}
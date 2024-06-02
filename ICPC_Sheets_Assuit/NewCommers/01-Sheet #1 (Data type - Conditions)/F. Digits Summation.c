#include <stdio.h>

int main()
{
    long long X, Y;

    scanf("%lld %lld", &X, &Y);

    printf("%lld", (X % 10) + (Y % 10));

    return 0;
}
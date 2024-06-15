#include<stdio.h>

int main()
{
    long long fib[51], N;
    fib[1] = 0;
    fib[2] = 1;
    scanf("%lld", &N);

    for(int i = 3; i < 51; ++i)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    printf("%lld ", fib[N]);

    return 0;
}
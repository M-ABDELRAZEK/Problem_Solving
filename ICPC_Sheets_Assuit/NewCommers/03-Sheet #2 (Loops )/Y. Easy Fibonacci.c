#include<stdio.h>

int main()
{
    int fib[45], N;
    fib[0] = 0;
    fib[1] = 1;
    scanf("%d", &N);

    for(int i = 2; i < N; ++i)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    for(int i = 0; i < N; ++i)
    {
        printf("%d ", fib[i]);
    }

    return 0;
}

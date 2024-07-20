#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return *(long long *)b - *(long long *)a;
}

int main()
{
    int N;
    long long K, sum = 0;
    scanf("%d %lld", &N, &K);
    long long a[N];

    for(int i = 0; i < N; ++i)
    {
        scanf("%lld", &a[i]);
    }

    qsort(a, N, sizeof(long long), compare);

    for(int i = 0; i < K; ++i)
    {
        if(a[i] > 0)
        {
            sum += a[i];
        }
    }

    printf("%lld", sum);

    return 0;
}
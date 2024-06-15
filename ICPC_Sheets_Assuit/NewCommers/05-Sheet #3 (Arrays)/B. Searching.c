#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long nums[N], X;

    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &nums[i]);
    }

    scanf("%lld", &X);
    for(int i = 0; i < N; i++)
    {
        if(nums[i] == X)
        {
            printf("%d", i);
            break;
        }
        else if(i == N - 1)
        {
            printf("-1");
        }
    }

    return 0;
}
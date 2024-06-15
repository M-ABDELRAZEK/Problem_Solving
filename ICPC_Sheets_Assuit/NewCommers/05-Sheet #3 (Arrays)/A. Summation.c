#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long nums[N], sum = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &nums[i]);
    }

    for(int i = 0; i < N; i++)
    {
        sum += nums[i];
    }

    printf("%lld", llabs(sum));

    return 0;
}
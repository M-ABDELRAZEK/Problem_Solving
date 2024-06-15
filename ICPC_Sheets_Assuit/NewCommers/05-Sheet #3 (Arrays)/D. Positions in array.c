#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int nums[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < N; i++)
    {
        if(nums[i] <= 10)
            printf("A[%d] = %d\n", i, nums[i]);
    }

    return 0;
}
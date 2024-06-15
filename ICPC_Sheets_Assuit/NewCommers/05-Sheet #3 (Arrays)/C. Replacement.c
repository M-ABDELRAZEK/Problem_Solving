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
        if(nums[i] > 0)
            nums[i] = 1;
        else if(nums[i] < 0)
            nums[i] = 2;
        printf("%d ", nums[i]);
    }

    return 0;
}
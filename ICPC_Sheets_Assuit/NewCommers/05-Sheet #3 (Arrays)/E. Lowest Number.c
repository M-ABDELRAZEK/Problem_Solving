#include<stdio.h>

int main()
{
    int N, lowest = 1e5, index;
    scanf("%d", &N);
    int nums[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < N; i++)
    {
        if(nums[i] < lowest)
            {
                lowest = nums[i];
                index = i + 1;
            }
    }

    printf("%d %d", lowest, index);
    return 0;
}
#include<stdio.h>

int main()
{
    int n, even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d", &n);
    int nums[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if(nums[i] % 2 == 0)
            even += 1;
        else 
            odd += 1;
        if(nums[i] > 0)
            positive += 1;
        else if(nums[i] < 0)
            negative += 1;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
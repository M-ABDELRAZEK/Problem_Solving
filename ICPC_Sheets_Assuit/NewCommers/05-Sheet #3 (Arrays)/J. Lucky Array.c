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

    int min = nums[0];

    for(int i = 0; i < N; i++)
    {
        if(nums[i] < min)
            {
                min = nums[i];
            }
    }

    int counter = 0;

    for(int i = 0; i < N; i++)
    {
        if(nums[i] == min)
            {
                counter++;
            }
    }
    if(counter % 2 == 1)
        printf("Lucky");
    else
        printf("Unlucky");

    return 0;
}
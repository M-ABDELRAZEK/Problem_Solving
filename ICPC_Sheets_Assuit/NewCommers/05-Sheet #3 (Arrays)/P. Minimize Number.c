#include<stdio.h>

int main()
{
    int N, count = 0;
    scanf("%d", &N);

    int nums[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    loop:
    for(int i = 0; i < N; i++)
    {
        if(nums[i] % 2 == 0)
        {
            nums[i] /= 2;
        }
        else 
        {
            printf("%d", count);
            return 0;
        }
    }
    count++;
    goto loop;

}

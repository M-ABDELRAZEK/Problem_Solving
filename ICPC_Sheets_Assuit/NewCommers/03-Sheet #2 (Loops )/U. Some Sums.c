#include<stdio.h>

int main()
{
    int N, A, B, digitalSum = 0, sum = 0;

    scanf("%d %d %d", &N, &A, &B);

    for(int i = 1; i <= N; ++i)
    {
        int j = i;
        digitalSum = 0;
        while(j)
        {
            digitalSum += j % 10;
            j /= 10;
        }
        if(digitalSum >= A && digitalSum <= B)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
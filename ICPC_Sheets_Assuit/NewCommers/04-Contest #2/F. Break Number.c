#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long T, maxDivision = 0, N;
    scanf("%lld", &T);

    while(T--)
    {
        int counter = 0;
        scanf("%lld", &N);
        counter = __builtin_ctzll(N);
        if(counter > maxDivision)
        {
            maxDivision = counter;
        }
    }

    printf("%lld", maxDivision);

    return 0;
}

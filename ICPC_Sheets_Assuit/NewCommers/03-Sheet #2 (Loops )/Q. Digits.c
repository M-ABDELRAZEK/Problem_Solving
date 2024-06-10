#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    long long num;
    scanf("%d", &N);

    while (N--)
    {
        scanf("%lld", &num);
        if(num == 0)
        {
            printf("0\n");
            continue;
        }
        while(num > 0)
        {
            printf("%lld ", num % 10);
            num /= 10;
        }
        printf("\n");
    }
    

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T, X, Y, sum = 0;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &X, &Y);

        for(int i = __min(X, Y) + 1 ; i < __max(X, Y); i++)
        {
            if(i % 2 == 0)
                continue;
            sum += i;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
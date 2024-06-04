#include<stdio.h>

int main()
{
    int N, i = 1;
    scanf("%d", &N);

    while(i <= 12)
    {
        printf("%d * %d = %d\n", N, i, N * i);
        ++i;
    }
}
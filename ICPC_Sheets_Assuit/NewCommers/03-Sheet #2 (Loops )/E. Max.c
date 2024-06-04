#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Xi, MAX = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &Xi);
        MAX = __max(MAX, Xi);
    }

    printf("%d", MAX);

    return 0;
}
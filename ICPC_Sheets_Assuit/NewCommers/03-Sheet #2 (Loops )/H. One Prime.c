#include<stdio.h>

int main()
{
    int N, i = 2;
    scanf("%d", &N);

    if(N == 1 || N == 0)
    {
        printf("NO");
        return 0;
    }
    while(N > i)
    {
        if(N % i == 0)
        {
            printf("NO");
            return 0;
        } else 
            i++;
    }

    printf("YES");
}
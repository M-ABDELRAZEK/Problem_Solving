#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int index = (N + 1) / 2;

    while (index--)
    {
        if(index == 0)
        {
            for(int i = N; i > 0; i--)
            {
                if(i == N / 2 + 1)
                {
                    printf("X");
                }
                else
                {
                    printf("*");
                }
            }
        }
        else
        {
            for(int i = N; i > 0; i--)
            {
                if(N - i == index + (N / 2))
                    printf("/");
                else if(N - i == (N / 2) - index)
                    printf("\\");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    index = (N + 1) / 2;
    int j = 0;
    while(index--)
    {
        if(index == 0)
        {
            break;
        }
        for(int i = N; i > 0; i--) 
        {
            if(i == index)
                printf("\\");
            else if(N - i == index - 1)
                printf("/");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
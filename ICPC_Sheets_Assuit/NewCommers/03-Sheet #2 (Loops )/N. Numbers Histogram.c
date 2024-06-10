#include<stdio.h>

int main()
{
    char S;
    int N;

    scanf("%c %d", &S, &N);

    int X[N];

    for(int i = 0; i < N; i++)
        scanf("%d", &X[i]);

    for(int j = 0; j < N; j++)
    {
        for(int i = 0; i < X[j]; i++)
        {
            printf("%c", S);
        }
        printf("\n");
    }

    return 0;
}
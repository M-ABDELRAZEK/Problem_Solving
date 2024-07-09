#include<stdio.h>

int main()
{
    int N, M, X, Y;
    scanf("%d %d", &N, &M);
    char arr[N][M];

    for(int i = 0; i < N; i++)
    {
        scanf("%s", &arr[i]);
    }

    scanf("%d %d", &X, &Y);
    X--;
    Y--;

    for(int i = X - 1; i <= X + 1; i++)
    {
        for(int j = Y - 1; j <= Y + 1; j++)
        {
            if((i == X && j == Y) || (i < 0 || i >= N || j < 0 || j >= M))
                continue;
            if(arr[i][j] != 'x')
            {
                printf("no");
                return 0;
            }
        }
    }
    printf("yes");
    return 0;
}
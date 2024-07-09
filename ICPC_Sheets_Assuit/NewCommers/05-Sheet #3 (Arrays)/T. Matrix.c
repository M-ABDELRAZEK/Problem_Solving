#include<stdio.h>
#include<math.h>

int main()
{
    int N, sumD1 = 0, sumD2 = 0;
    scanf("%d", &N);
    int arr[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < N; i++)
    {
        sumD1 += arr[i][i];
        
    }

    for(int i = 0; i < N; i++)
    {
        sumD2 += arr[i][N - i -1];
    }

    int result = abs(sumD1 - sumD2);
    printf("%d", result);

    return 0;
}
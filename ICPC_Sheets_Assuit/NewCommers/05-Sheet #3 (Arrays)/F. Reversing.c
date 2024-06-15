#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N], revArr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = N - 1;

    for(int i = 0; i < N; i++)
    {
        revArr[i] = arr[j];
        j--;
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", revArr[i]);
    }

    return 0;
}
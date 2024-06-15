#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long arr[N], revArr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int j = N - 1;

    for(int i = 0; i < N; i++)
    {
        revArr[i] = arr[j];
        j--;
    }

    for(int i = 0; i < N; i++)
    {
        if(arr[i] != revArr[i])
        {
            printf("NO");
            break;
        }
        else if(i == N - 1)
        {
            printf("YES");
        }
    }

    return 0;
}
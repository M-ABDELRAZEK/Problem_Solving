#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long arr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 0; j <  N - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
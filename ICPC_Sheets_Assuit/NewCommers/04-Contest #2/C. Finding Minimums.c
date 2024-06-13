#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int index = N / K;
    int arr[K];

    if(N % K == 0)
    {
        while(index--)
        {
            for(int i = 0; i < K; i++)
            {
                scanf("%d", &arr[i]);
            }
            int min = arr[0];
            for(int i = 0; i < K; i++)
            {
                min = __min(min, arr[i]);
            }
            printf("%d\n", min);
        }
    }
    else
    {
        index += 1;
        while(index--)
        {   
            if(index == 0)
            {
                int arr_remainder[N % K];
                for(int i = 0; i < (int)(sizeof(arr_remainder) / sizeof(int)); i++)
                {
                    scanf("%d", &arr_remainder[i]);
                }
                int min = arr_remainder[0];
                for(int i = 0; i < (int)(sizeof(arr_remainder) / sizeof(int)); i++)
                {
                    min = __min(min, arr_remainder[i]);
                }
                printf("%d\n", min);
            }
            else
            {
                for(int i = 0; i < K; i++)
                {
                    scanf("%d", &arr[i]);
                }
                int min = arr[0];
                for(int i = 0; i < K; i++)
                {
                    min = __min(min, arr[i]);
                }
                printf("%d\n", min);
            }
        }
    }

    return 0;
}
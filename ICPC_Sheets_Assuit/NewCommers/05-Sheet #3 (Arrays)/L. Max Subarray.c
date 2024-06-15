#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        int arr[N];
        
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                int max = arr[j];
                for(int k = j; k <= i; k++)
                {
                    max = __max(max, arr[k]);
                }
                printf("%d ", max);
            }
        }

        printf("\n");
    }
    
}
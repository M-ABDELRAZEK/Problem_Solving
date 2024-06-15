#include<stdio.h>
#include<limits.h>

int main()
{
    int T, N;
    scanf("%d", &T);

    while(T--)
    {
        int smallest = INT_MAX;
        scanf("%d", &N);
        int arr[N];

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = i + 1; j < N; j++)
            {
                if(smallest > arr[i] + arr[j] + j - i)
                    smallest = arr[i] + arr[j] + j - i;
            }
        }
        printf("%d\n", smallest);
    }

    return 0;
}
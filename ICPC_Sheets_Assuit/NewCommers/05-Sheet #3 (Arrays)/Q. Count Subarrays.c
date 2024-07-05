#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, count = 0;
        scanf("%d", &N);
        int arr[N];
        
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(int i = 1; i < N; i++)
        {
            for(int j = i; j < N; j++)
            {
                if(arr[j] >= arr[j - 1])
                    count++;
                else 
                    break;
            }
        }
        printf("%d\n", count + N);
    }
    return 0;
}
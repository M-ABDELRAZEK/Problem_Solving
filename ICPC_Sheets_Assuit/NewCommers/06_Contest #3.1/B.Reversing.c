#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int N, index;
    scanf("%d", &N);
    int arr[N], revArr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    memcpy(revArr, arr, sizeof(revArr));

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == 0)
        {
            index = i;
        }
        if(index == i)
        {
            for(int j = 0; j < index; j++)
            {
                revArr[j] = arr[index - j - 1];
            }
        }
        memcpy(arr, revArr, sizeof(arr));
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", revArr[i]);
    }

    return 0;
}
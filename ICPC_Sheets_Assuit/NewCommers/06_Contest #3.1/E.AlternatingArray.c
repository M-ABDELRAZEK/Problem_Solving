#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int N, count1 = 0, count2 = 0, count;
    scanf("%d", &N);
    int *arr1 = (int *)malloc(N * sizeof(int));
    int *arr2 = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    memcpy(arr2, arr1, N * sizeof(arr1[0]));

    for (int i = 0; i < N; i += 2)
    {
        if(arr1[i] < 0)
            {
                arr1[i] = -arr1[i];
                count1++;
            }
            if(i + 1 == N)
                break;
            if(arr1[i + 1] > 0)
            {
                arr1[i] = -arr1[i];
                count1++;
            }
    }

    for (int i = 0; i < N; i += 2)
    {
        if(arr2[i] > 0)
        {
            arr2[i] = -arr2[i];
            count2++;
        }
        if(i + 1 == N)
            break;
        if(arr2[i + 1] < 0)
        {
            arr2[i] = -arr2[i];
            count2++;
        }
        
    }
    count = (count1 > count2) ? count2 : count1;
    printf("%d", count);
    return 0;
}
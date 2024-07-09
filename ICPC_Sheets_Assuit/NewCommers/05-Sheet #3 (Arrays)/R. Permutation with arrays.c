#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int N;
    scanf("%d", &N);

    int *arr = (int*)malloc(N * sizeof(int));
    int *per = (int*)malloc(N * sizeof(int));

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &per[i]);
    }

    qsort(arr, N, sizeof(int), compare);
    qsort(per, N, sizeof(int), compare);

    for(int i = 0; i < N; ++i)
    {
        if (arr[i] != per[i])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");

    return 0;
}
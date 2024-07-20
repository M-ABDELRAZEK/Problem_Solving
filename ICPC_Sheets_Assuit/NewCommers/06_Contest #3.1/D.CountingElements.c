#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n, count = 0, temp;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);

    for(int i = n - 1; i >= 0; --i)
    {
        if(temp == arr[i])
        {
            continue;
        }
        temp = arr[i];
        for(int j = i; j >= 0; --j)
        {
            if(arr[j] == arr[i] - 1)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}
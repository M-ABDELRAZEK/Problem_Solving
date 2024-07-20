#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int front = 0, end = n - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    
    while(end >= front)
    {
        if(end >= front)
        {
            printf("%d ", arr[front]);
            front++;
        }
        if(end >= front)
        {
            printf("%d ", arr[end]);
            end--;
        }
    }
    
    return 0;
}
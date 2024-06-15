#include<stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    char arr[n + 1];
    scanf("%s", &arr);

    for(int i = 0; i < n; ++i)
    {
        sum += arr[i] - '0';  // to convert character to integer
    }
    printf("%d", sum);

    return 0;
}
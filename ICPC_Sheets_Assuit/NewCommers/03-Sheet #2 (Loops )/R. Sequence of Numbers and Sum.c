#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int m, n, sum = 0;

    while(true)
    {
        scanf("%d %d", &m, &n);
        
        for(int i = __min(m, n); i <= __max(m, n); i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
        sum = 0;
    }

    return 0;
}
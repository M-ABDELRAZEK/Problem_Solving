#include<stdio.h>

int main()
{
    int n, count = 0, j = 1;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i)
    {
        for(;; ++j)
        {
            printf("%d ", j);
            count += 1;
            if(count == 3)
            {
                printf("PUM\n");
                j += 2;
                count = 0;
                break;
            }
        }
    }

    return 0;
}
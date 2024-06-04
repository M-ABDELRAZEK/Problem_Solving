#include<stdio.h>

int main()
{
    int N;
    int i = 1;

    scanf("%d", &N);

    do
    {
        printf("%d\n", i);
        i += 1;
    }while(i <= N);

    return 0;
}
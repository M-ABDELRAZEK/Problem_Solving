#include<stdio.h>

int main()
{
    int N;
    int i = 1;

    scanf("%d", &N);

    if(N == 1)
        printf("-1");
        
    do
    {
        if(i % 2 == 0)
        printf("%d\n", i);
        i += 1;
    }while(i <= N);

    return 0;
}
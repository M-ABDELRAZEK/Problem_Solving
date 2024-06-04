#include<stdio.h>

int main()
{
    int num, i = 2;

    scanf("%d", &num);
    
    while(i <= num)
    {
        loop:
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                goto skip;
            }
        }
        printf("%d ", i);
        skip:
        ++i;
    }
    
    return 0;
}
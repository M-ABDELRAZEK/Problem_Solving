#include<stdio.h>

int main()
{
    int num, revNum = 0;

    scanf("%d", &num);
    int origNum = num;
    
    do
    {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }while(num);

    printf("%d\n", revNum);
    revNum == origNum ? printf("YES") : printf("NO");

    return 0;
}
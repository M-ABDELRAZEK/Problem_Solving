#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);
    int left_degit = num / 10;
    int right_degit = num % 10;

    if(right_degit == 0)
        printf("YES");
    else if(left_degit % right_degit == 0 || right_degit % left_degit == 0)
        printf("YES");
    else 
        printf("NO");

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A, B, C, max1, max2, min1, min2;

    scanf("%d %d %d", &A, &B, &C);

    max1 = __max(A, B);
    max2 = __max(max1, C);

    min1 = __min(A, B);
    min2 = __min(min1, C);

    printf("%d %d", min2, max2);

    return 0;
}
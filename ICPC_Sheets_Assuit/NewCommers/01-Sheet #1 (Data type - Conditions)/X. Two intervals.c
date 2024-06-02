#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l1, r1, l2, r2;
    
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    __max(l1, l2) <= __min(r1, r2) ? printf("%d %d", __max(l1, l2), __min(r1, r2)) : printf("-1");

    return 0;
}
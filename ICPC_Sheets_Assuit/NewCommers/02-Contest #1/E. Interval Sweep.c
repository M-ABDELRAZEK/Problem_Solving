#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    (abs(a - b) <= 1 && a > 0 && b > 0) ? printf("YES") : printf("NO");

    return 0;
}
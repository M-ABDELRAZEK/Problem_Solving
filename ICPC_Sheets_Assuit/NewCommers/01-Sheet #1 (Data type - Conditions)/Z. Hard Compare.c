#include<stdio.h>
#include<math.h>

int main()
{
    double A, B, C, D;

    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    B * log(A) > D * log(C) ? printf("YES") : printf("NO");

    return 0;
}
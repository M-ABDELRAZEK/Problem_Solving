#include<stdio.h>

int main()
{
    long long int a, b, c, d;
    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long p1 = a + b - c;
    long long p2 = a - b + c;
    long long p3 = a * b - c;
    long long p4 = a - b * c;
    long long p5 = a * b + c;
    long long p6 = a + b * c;
    
    (d == p1 || d == p2 || d == p3 || d == p4 || d == p5 || d == p6) ? printf("YES") : printf("NO");
    
    return 0;
}
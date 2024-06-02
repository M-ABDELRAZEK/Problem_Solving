#include<stdio.h>
#include<math.h>

int main()
{
    double n, k, a;
    double res;
    int int_test;
    long long long_test;

    scanf("%lf %lf %lf", &n, &k, &a);

    res = n * k / a;

    int_test = (int)res;
    long_test = (long long)res;

    if(fabs(res - int_test) < 0.0001)
        printf("int");
    else if(fabs(res - long_test) < .00001)
        printf("long long");
    else 
        printf("double");

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    double R;

    scanf("%lf", &R);

    printf("%0.9lf", 3.141592653 * pow(R, 2));

    return 0;
}
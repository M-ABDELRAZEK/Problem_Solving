#include <stdio.h>

int main()
{
    int i;
    long long l; 
    char ch;
    float f;
    double d;

    scanf("%i %lld %c %f %lf", &i, &l, &ch, &f, &d);

    printf("%i\n%lld\n%c\n%f\n%lf", i, l, ch, f, d);

    return 0;
}


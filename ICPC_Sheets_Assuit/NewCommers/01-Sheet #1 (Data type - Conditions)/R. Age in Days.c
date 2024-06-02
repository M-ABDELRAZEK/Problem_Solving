#include <stdio.h>

int main()
{
    unsigned int age, years, months, days;

    scanf("%u", &age);

    years = age / 365;
    age = age % 365;
    months = age / 30;
    age = age % 30;
    days = age;

    printf("%u years\n", years);
    printf("%u months\n", months);
    printf("%u days\n", days);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max, min, mid;
    scanf("%d %d %d", &a, &b, &c);

    max = __max(__max(a, b), c);
    min = __min(__min(a, b), c);

    if(a > min && a < max)
        mid = a;
    else if(b > min && b < max)
        mid = b;
    else if(c > min && c < max)
        mid = c;
    else if(a == b || a == c)
        mid = a;
    else if(c == b)
        mid = c;

    printf("%d\n%d\n%d\n\n%d\n%d\n%d", min, mid, max, a, b, c);

    return 0;
}
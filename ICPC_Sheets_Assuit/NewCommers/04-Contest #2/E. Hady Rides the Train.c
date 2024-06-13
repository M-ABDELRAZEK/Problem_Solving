#include<stdio.h>

int main()
{
    long long id, columns, rows;
    scanf("%lld", &id);
    rows = id / 4;
    if(rows % 2 == 0)
        columns = id % 4;
    else 
        columns = 3 - id % 4;
    printf("%lld %lld", rows, columns);

    return 0;
}
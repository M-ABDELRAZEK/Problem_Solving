#include<stdio.h>

int main()
{
    long long T, res[100000], counter = 0, sum = 0;
    scanf("%lld", &T);
    long long n, s;

    while (T--)
    {
        scanf("%lld %lld", &n, &s);
        counter = 0;
        sum = 0;
        
        if(n * (n + 1) / 2 < s)
            printf("-1\n");
        else
        {
            for(long long i = n; i > 0; i--)
            {
                if(sum + i <= s)
                {
                    sum += i;
                    res[counter++] = i;
                }
                if(sum == s)
                {
                    break;
                }
            }
            for (int i = 0; i < counter; i++)
            {
                printf("%lld ", res[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
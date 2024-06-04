#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    long long fact[T], N[T];
    long long factorial;
    
    for (int i = 0; i < T; i++)
    {
        scanf("%lld", &N[i]);
    }
    
    for(int j = 0; j < T; j++)
    {
        factorial = 1;
        
        for(int i = 1; i <= N[j]; i++)
        {
            if(N[j] == 0)
                {
                    factorial = 1;
                    break;
                }
            factorial *= i;
        }
        fact[j] = factorial;
    }

    for (int i = 0; i < T; i++)
    {
        printf("%lld\n", fact[i]);
    }

    return 0;
}
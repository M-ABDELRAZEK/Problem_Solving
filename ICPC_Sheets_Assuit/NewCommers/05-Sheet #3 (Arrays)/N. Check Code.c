#include<stdio.h>
#include<string.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int len = A + B + 1;
    char S[len + 1];
    scanf("%s", S);

    if(S[A] != '-' || strlen(S) != len)
    {
        printf("No");
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if(i == A || (S[i] >= '0' && S[i] <= '9'))
        {
            continue;
        }
        else
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes"); 
    return 0;
}

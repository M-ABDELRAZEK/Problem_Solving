#include<stdio.h>

int main()
{
    int A, B, C;
    char S, Q;

    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    switch(S)
    {
        case '+':
            C == A + B ? printf("Yes") : printf("%d", A + B); 
            break;
        case '-':
            C == A - B ? printf("Yes") : printf("%d", A - B);
            break;
        case '*':
            C == A * B ? printf("Yes") : printf("%d", A * B);
            break;
    }
    return 0;
}
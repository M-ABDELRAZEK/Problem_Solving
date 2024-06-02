#include<stdio.h>

int main()
{
    int A, B;
    char S;

    scanf("%d %c %d", &A, &S, &B);

    if(A == B)
        S == '=' ? printf("Right") : printf("Wrong");
    else if(A > B)
        S == '>' ? printf("Right") : printf("Wrong");
    else if(A < B)
        S == '<' ? printf("Right") : printf("Wrong");

    return 0;
}
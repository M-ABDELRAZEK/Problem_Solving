#include<stdio.h>

int main()
{
    float N;
    scanf("%f", &N);

    if(N > (int)N)
        printf("float %d %f", (int)N, N - (int)N);
    else if (N == (int)N)
        printf("int %d", (int)N);
    
    return 0;
}
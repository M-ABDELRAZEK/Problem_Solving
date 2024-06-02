#include<stdio.h>
#include<math.h>

int main()
{
    float A, B;
    scanf("%f %f", &A, &B);
    
    printf("floor %0.0f / %0.0f = %0.0f\n", A, B, floor(A / B));
    printf("ceil %0.0f / %0.0f = %0.0f\n", A, B, ceil(A / B));
    printf("round %0.0f / %0.0f = %0.0f\n", A, B, round(A / B));

    return 0;
}
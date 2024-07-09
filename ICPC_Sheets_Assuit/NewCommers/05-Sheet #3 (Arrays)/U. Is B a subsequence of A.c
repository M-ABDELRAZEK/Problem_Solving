#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *A = (int*)malloc(N * sizeof(int));
    int *B = (int*)malloc(M * sizeof(int));
    
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &A[i]);
    }
    
    for(int i = 0; i < M; ++i)
    {
        scanf("%d", &B[i]);
    }
    
    int i = 0, j = 0;
    while(i < N && j < M)
    {
        if(A[i] == B[j])
            j++;
        i++;
    }

    if(M == j)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
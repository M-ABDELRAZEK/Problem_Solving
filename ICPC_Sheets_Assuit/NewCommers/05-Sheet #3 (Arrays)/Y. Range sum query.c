#include <stdio.h>

int main() {
    int N, T;
    scanf("%d %d", &N, &T);
    int arr[N];
    long long prefixSum[N + 1]; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    prefixSum[0] = 0;
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < T; i++) {
        int L, R;
        scanf("%d %d", &L, &R);

        long long sum = prefixSum[R] - prefixSum[L - 1];
        printf("%lld\n", sum);
    }

    return 0;
}

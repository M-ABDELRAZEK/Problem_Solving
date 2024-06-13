#include <stdio.h>

int main() {
    int T;
    long long L, R, sum;

    scanf("%d", &T);

    while (T--) {
        scanf("%lld %lld", &L, &R);

        if(R > L)
            sum = ((R - L) + 1) * (L + R) / 2;
        else 
            sum = ((L - R) + 1) * (L + R) / 2;
        printf("%lld\n", sum);
    }

    return 0;
}

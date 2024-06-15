#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    if (N == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }

    int maxPos = 0;
    int minPos = 0;

    for (int i = 1; i < N; ++i) { 
        if (arr[i] > arr[maxPos]) {
            maxPos = i;
        }
        if (arr[i] < arr[minPos]) {
            minPos = i;
        }
    }

    int tmp = arr[maxPos];
    arr[maxPos] = arr[minPos];
    arr[minPos] = tmp;

    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

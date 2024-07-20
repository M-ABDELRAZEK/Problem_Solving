#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        int evenCount = 0, oddCount = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) 
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
        
        int diff = abs(evenCount - oddCount);
        if (diff % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", diff / 2);
        }
    }
    
    return 0;
}

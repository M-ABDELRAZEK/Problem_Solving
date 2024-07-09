#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define ll long long

int compare(const void *a, const void *b)
{
    return *(ll *)a - *(ll *)b; 
}

bool binarySearch(ll arr[], ll size, ll num)
{
    ll L = 0, R = size - 1, mid;
    while (R >= L)
    {
        mid = (R + L) / 2;
        if(arr[mid] == num)
            return true;
        else if(arr[mid] < num)
            L = mid + 1;
        else 
            R = mid - 1;
    }
    return false;
}

int main()
{
    ll N, T;
    scanf("%lld %lld", &N, &T);
    ll arr[N];
    for(ll i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, N, sizeof(ll), compare);

    for(ll i = 0; i < T; i++)
    {
        ll X;
        scanf("%lld", &X);
        if (binarySearch(arr, N, X))
            printf("found\n");
        else 
            printf("not found\n");
    }
    return 0;
}
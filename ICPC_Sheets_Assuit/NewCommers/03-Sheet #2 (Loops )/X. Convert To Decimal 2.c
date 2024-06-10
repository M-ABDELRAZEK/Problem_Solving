#include<stdio.h>
#include<math.h>

int main()
{
    int N, num, countOnes, res = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        countOnes = 0;
        res = 0;

        while(num)
        {
            if(num % 2 == 1)
                countOnes += 1;
            num /= 2;
        }

        for(int i = 0; i < countOnes; i++)
        {
            res += pow(2, i);
        }
        printf("%d\n", res);
    }

    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int A, B, num, testNum, digit, luckyNum;
    bool islucky = false;

    scanf("%d %d", &A, &B);

    if(A > B)
        num = B;
    else
        num = A;
    
    for(int i = num; i <= num + abs(A - B); i++)
    {   
        testNum = i;
        luckyNum = i;
        while(testNum)
        {
            digit = testNum % 10;
            testNum /= 10;
            if(digit == 4 || digit == 7)
            {
                if(testNum == 0)
                {
                    printf("%d ", luckyNum);
                    islucky = true;
                }
            }
            else
                break;
        }
    }

    if(islucky == false)
        printf("-1");

    return 0;
}
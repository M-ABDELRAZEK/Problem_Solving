#include<stdio.h>

#define Right_Password 1999

int main()
{
    int password;

    while(1)
    {
        scanf("%d", &password);
        if(password == Right_Password)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}
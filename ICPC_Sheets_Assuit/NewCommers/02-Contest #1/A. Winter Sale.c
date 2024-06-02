#include<stdio.h>

int main()
{
    float discount, final_price, price;

    scanf("%f %f", &discount, &final_price);
    price = final_price / (1 - discount / 100);

    printf("%0.2f", price);

    return 0;
}
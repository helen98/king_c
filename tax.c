// Adds 5 % tax 

#include <stdio.h>

int main(void)
{
    float amount_of_money;

    printf("Enter an amount: ");
    scanf("%f", &amount_of_money);
    printf("With tax added: %.2f\n", amount_of_money * 1.05f);
    return 0;
}
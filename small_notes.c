/* Shows how to pay an amount of money using
the smallest number of bills */

#include <stdio.h>

int main(void)
{
    int amount, bill_20, bill_10, bill_5, bill_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bill_20 = amount / 20;
    amount = amount - bill_20 * 20;

    printf("$20 bills: %d\n", bill_20);

    bill_10 = amount / 10;
    amount = amount - bill_10 * 10;

    printf("$10 bills: %d\n", bill_10);

    bill_5 = amount / 5;
    amount = amount - bill_5 * 5;

    printf(" $5 bills: %d\n", bill_5);
    
    bill_1 = amount / 1;
    amount = amount - bill_1 * 1;

    printf(" $1 bills: %d\n", bill_1);

    return 0;
}
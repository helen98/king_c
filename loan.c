/* Calculates the remaining balance on a loan after the first, 
second, and third monthly payments */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, interest_monthly, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_monthly = (interest_rate / 100) / 12;
    loan = (loan - monthly_payment) + loan * interest_monthly;

    printf("Balance remaining after first payment: %.2f\n", loan);

    loan = (loan - monthly_payment) + loan * interest_monthly;

    printf("Balance remaining after second payment: %.2f\n", loan);

    loan = (loan - monthly_payment) + loan * interest_monthly;

    printf("Balance remaining after second payment: %.2f\n", loan);
    
    return 0;
}
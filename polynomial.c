// Computes a polynomial with provided x value

#include <stdio.h>

int main(void)
{
    float x, result;


    printf("Enter a value of x: ");
    scanf("%f", &x);

    result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    
    printf("Polynomial value is: %.2f\n", result);
    return 0;
}
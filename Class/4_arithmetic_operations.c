#include <stdio.h>

int main()
{
    // Declare two integer variables
    int num1 = 17;
    int num2 = 7;

    // Addition
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);

    // Subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);

    // Multiplication
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Modulus (remainder)
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);

    // Integer Division
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);

    // As numbers are integers so integer division will happen and any fractional part of the result is truncated or discarded

    // Complete Division with float
    printf("Division: %d / %d = %f\n", num1, num2, (float)num1 / num2);

    return 0;
}

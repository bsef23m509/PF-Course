#include <stdio.h>

int main()
{

    // We use the printf() function to print things on the console i.e cmd.

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num);

    float price;

    printf("Enter a price: ");
    scanf("%f", &price);

    printf("The price is: %.2f\n", price);

    return 0;
}

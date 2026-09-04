#include <stdio.h>
int main()
{

    int num, i = 1;
    int value, value_b1 = 0, value_b2 = 1;

    printf("Enter n: ");
    scanf("%d", &num);

    // printf("0 ");

    while (i <= num - 1)
    {

        value = value_b1 + value_b2;

        // printf("%d ", value);

        value_b2 = value_b1;
        value_b1 = value;

        i++;
    }

    printf("%dth Fibonacci term is : %d", num, value);

    return 0;
}
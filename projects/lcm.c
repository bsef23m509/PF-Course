#include <stdio.h>
int main()
{

    int num1, num2, product, hcf, lcm;

    num1 = 14;
    num2 = 12;
    product = num1 * num2;

    while (num1 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
            hcf = num1;
        }
        else if (num2 > num1)
        {
            num2 = num2 - num1;
            hcf = num2;
        }
        else if (num1 == num2)
        {
            num1 = 0;
            hcf = num2;
        }
    }

    printf("hcf: %d \n", hcf);

    lcm = product / hcf;

    printf("lcm: %d", lcm);

    return 0;
}
#include <stdio.h>
int main()
{

    int num1, num2, hcf;

    num1 = 15;
    num2 = 12;

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

    printf("hcf: %d", hcf);

    return 0;
}
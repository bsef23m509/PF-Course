#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int num1, num2, num3;

    num1 = rand() % 5 + 1;
    num2 = rand() % 5 + 1;
    num3 = rand() % 5 + 1;

    printf("Number 1: %d \n", num1);
    printf("Number 2: %d \n", num2);
    printf("Number 3: %d \n", num3);

    if (num1 == num2 && num2 == num3)
        printf("All are same \n");
    if (num1 != num2 && num2 != num3 && num1 != num3)
        printf("All are different \n");

    if (num1 == num2)
        printf("first and second are equal \n");
    else if (num2 == num3)
        printf("second and third are equal \n");
    else if (num1 == num3)
        printf("first and third are equal \n");

    if (num1 > num2 && num1 > num3)
    {
        printf("First is largest \n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Second is largest \n");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Third is largest \n");
    }

    if (num1 < num2 && num1 < num3)
    {
        printf("First is smallest \n");
        printf("second and third are greater than first \n");
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("Second is smallest \n");
        printf("first and third are greater than second \n");
    }
    else if (num3 < num1 && num3 < num2)
    {
        printf("Third is smallest \n");
        printf("first and second are greater than third \n");
    }

    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
    {
        printf("First is in middle of second and third \n");
    }
    else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
    {
        printf("Second is in middle of first and third \n");
    }
    else if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1))
    {
        printf("Third is in middle of first and second \n");
    }

    return 0;
}
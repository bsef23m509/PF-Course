#include <stdio.h>
int main()
{

    int num1, num2, num3, num4;
    int temp;

    printf("Enter 4 integers separated by space: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("%d %d %d %d \n", num1, num2, num3, num4);

    //  4,3,2,1

    if (num1 > num2) // 3,4,2,1
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) // 3,2,4,1
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 > num4) // 3,2,1,4
    {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }

    if (num1 > num2) // 2,3,1,4
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) // 2,1,3,4
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) // 1,2,3,4
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("%d %d %d %d", num1, num2, num3, num4);

    return 0;
}
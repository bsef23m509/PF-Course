#include <stdio.h>
int main()
{

    int num, temp;
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f0 = 0;

    scanf("%d", &num);

    while (num > 0)
    {
        temp = num % 10;

        if (temp == 0)
            f0++;
        else if (temp == 1)
            f1++;
        else if (temp == 2)
            f2++;
        else if (temp == 3)
            f3++;
        else if (temp == 4)
            f4++;
        else if (temp == 5)
            f5++;
        else if (temp == 6)
            f6++;
        else if (temp == 7)
            f7++;
        else if (temp == 8)
            f8++;
        else
            f9++;

        num = num / 10;
    }

    printf("F of 0: %d \n", f0);
    printf("F of 1: %d \n", f1);
    printf("F of 2: %d \n", f2);
    printf("F of 3: %d \n", f3);
    printf("F of 4: %d \n", f4);
    printf("F of 5: %d \n", f5);
    printf("F of 6: %d \n", f6);
    printf("F of 7: %d \n", f7);
    printf("F of 8: %d \n", f8);
    printf("F of 9: %d \n", f9);

    return 0;
}
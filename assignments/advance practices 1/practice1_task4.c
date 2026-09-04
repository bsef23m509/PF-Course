#include <stdio.h>
int main()
{

    int num, max;

    printf("Enter 1st num: ");
    scanf("%d", &num);

    max = num;

    for (int i = 2; i <= 10; i++)
    {
        printf("Enter %dth num: ", i);
        scanf("%d", &num);

        if (num > max)
        {
            printf("%d is greater then %d \n", num, max);
            max = num;
        }
    }

    printf("%d is the largest number", max);

    return 0;
}
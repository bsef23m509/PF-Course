#include <stdio.h>
int main()
{

    int sum = 0, i = 1, n = 20;

    while (i <= 20)
    {
        if (i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                sum = sum + 0;
                printf("%d \n", sum);
            }
            else
            {
                sum = sum + i;
                printf("%d \n", sum);
            }
        }

        else if (i % 5 == 0)
        {
            if (i % 3 == 0)
            {
                sum = sum + 0;
                printf("%d \n", sum);
            }
            else
            {
                sum = sum + i;
                printf("%d \n", sum);
            }
        }

        i++;
    }

    printf("%d", sum);

    return 0;
}
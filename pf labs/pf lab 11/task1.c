#include <stdio.h>
int main()
{

    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    int loop = 2 * n - 1;

    for (i = 1; i <= loop; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (j = 1; j <= (loop + 1 - i); j++)
            {
                printf("%d", i + j - n);
            }
        }

        printf("\n");
    }

    return 0;
}
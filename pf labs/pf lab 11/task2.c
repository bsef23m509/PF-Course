#include <stdio.h>
int main()
{

    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    int loop = 4 * n - 2;

    for (i = 1; i <= loop; i++)
    {
        if (i <= n)
        {
            for (j = n; j > i; j--)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else if (i <= (2 * n - 1))
        {
            for (j = 0; j < i - n; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else if (i <= (3 * n - 2))
        {
            for (j = (3 * n - 2) - i; j > 0; j--)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else
        {
            for (j = 3 * n - 2; j < i; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
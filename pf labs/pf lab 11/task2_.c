#include <stdio.h>

void printStarPattern(int n)
{
    int i, j;

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        printf("*\n");
    }
}

int main()
{

    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 2; i <= n / 2; i++)
    {
        printStarPattern(n);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
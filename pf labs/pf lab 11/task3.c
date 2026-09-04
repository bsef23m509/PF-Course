#include <stdio.h>
int main()
{

    int n, k_in, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k_in);

    for (i = 1; i <= n; i++)
    {
        printf("{");

        for (j = 1; j <= k_in; j++)
        {

            printf("{");

            for (k = 1; k <= j; k++)
            {
                if (k == j)
                    printf("%d", k);
                else
                    printf("%d,", k);
            }

            // printf("");
            if (j == k_in)
                printf("}");
            else
                printf("}, ");
            // printf("");
        }

        printf("}\n");
    }

    return 0;
}
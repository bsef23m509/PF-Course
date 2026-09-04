#include <stdio.h>
#include <stdlib.h>

void performOperation(int *num, int *res, const int size)
{

    int i;

    for (i = 0; i < size; i++)
    {
        res[size - i - 1] = num[i];
    }

    for (i = 0; i < size; i++)
    {
        if (res[i] == 0)
            res[i] = 1;
        else
            res[i] = 0;
    }
}

void input(int num[], int const size)
{

    int i;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
}

void program(int t)
{
    int m, n, *arr, *res, i, j;

    do
    {
        scanf("%d %d", &m, &n);
    } while (m != n);

    arr = (int *)malloc((n * n) * sizeof(int));
    res = (int *)malloc((n * n) * sizeof(int));

    for (i = 0; i < n; i++)
    {
        input(&arr[i * n], n);
    }

    for (i = 0; i < n; i++)
    {
        performOperation(&arr[i * n], &res[i * n], n);
    }

    printf("Test#%d \n", t);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", res[i * n + j]);
        printf("\n");
    }

    free(arr);
    free(res);
}

int main()
{

    int t, i;

    do
    {
        scanf("%d", &t);
    } while (t >= 1000);

    for (i = 1; i <= t; i++)
    {
        program(i);
        // printf("\n");
    }

    return 0;
}
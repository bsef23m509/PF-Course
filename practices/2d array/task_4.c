#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int average(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8)
{
    int sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;
    return (sum / 8);
}

int main()
{

    srand(time(0));

    int size = 9, arr[size][size], res[size][size], i, j;

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            arr[i][j] = rand() % 10;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("\n");

    printf("Sum: \n");

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            if (i != 0 && j != 0 && i != size - 1 && j != size - 1)
                res[i][j] = average(arr[i][j - 1], arr[i][j + 1], arr[i - 1][j - 1], arr[i - 1][j], arr[i - 1][j + 1], arr[i + 1][j - 1], arr[i + 1][j], arr[i + 1][j + 1]);
            else
                res[i][j] = arr[i][j];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_3x3_group(const int size, int arr[size][size], int r, int c)
{
    int i, j;

    for (i = r - 1; i <= r + 1; i++)
    {
        for (j = c - 1; j <= c + 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{

    srand(time(0));

    int size = 5, arr[size][size], i, j, k, l;

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            arr[i][j] = rand() % 90 + 10;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("\n");

    printf("In groups of 3x3: \n\n");

    for (i = 1; i < size - 1; i++)
    {
        for (j = 1; j < size - 1; j++)
        {
            print_3x3_group(size, arr, i, j);
        }
        // printf("\n");
    }

    return 0;
}
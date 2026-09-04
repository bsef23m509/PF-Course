#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], const int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                /* Swap arr[j] and arr[j+1] */
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort(const int size, int arr[size][size])
{
    int col[size], i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            col[j] = arr[j][i];
        }

        bubble_sort(col, size);

        for (j = 0; j < size; j++)
        {
            arr[j][i] = col[j];
        }
    }
}

int main()
{

    srand(time(0));

    int size = 10, arr[size][size], i, j;

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

    sort(size, arr);
    printf("Sorted Array: \n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
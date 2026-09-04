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

int main()
{

    srand(time(0));

    int size = 20, arr[size], i;

    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    printf("Before sort: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, size);

    printf("\nAfter sort: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
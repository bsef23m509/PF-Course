#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void task1(const int size, int arr[][size])
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            if (i == j)
                printf("%d ", arr[i][j]);
            else
                printf(" ");
        printf("\n");
    }
}

void task2(const int size, int arr[][size])
{
    int i, j;

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            if (arr[i][j] == 0)
                arr[i][j] = 1;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
void task3(const int size, int arr[][size])
{
    int i, j;

    printf("Indexes of 0: \n");
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            if (arr[i][j] == 0)
                printf("%d %d \n", i, j);
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

    printf("Task 1: \n");
    task1(size, arr);
    printf("\n");

    printf("Task 3: \n");
    task3(size, arr);
    printf("\n");

    printf("Task 2: \n");
    task2(size, arr);
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void frequency_bubble_sort(int frequencies[], int nums[], const int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (frequencies[j] > frequencies[j + 1])
            {
                /* Swap arr[j] and arr[j+1] */
                temp = frequencies[j];
                frequencies[j] = frequencies[j + 1];
                frequencies[j + 1] = temp;

                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

void task1(const int size, int arr[size], int frequencies[])
{
    int i, num;

    for (num = 0; num < 10; num++)
        for (i = 0; i < size; i++)
            if (num == arr[i])
                frequencies[num]++;

    for (num = 0; num < 10; num++)
        printf("%d has %d occurencies \n", num, frequencies[num]);
}

void task2(int frequencies[])
{
    int i, nums[10];

    for (i = 0; i < 10; i++)
        nums[i] = i;

    frequency_bubble_sort(frequencies, nums, 10);

    for (i = 0; i < 10; i++)
        printf("%d has %d occurencies \n", nums[i], frequencies[i]);
}

int main()
{

    srand(time(0));

    int size = 100, arr[size], frequencies[10], i, j;

    for (i = 0; i < size; i++)
        arr[i] = rand() % 10;

    for (i = 0; i < 10; i++)
        frequencies[i] = 0;

    printf("\n");

    printf("Task 1: \n");
    task1(size, arr, frequencies);
    printf("\n");

    printf("Task 2: \n");
    task2(frequencies);
    printf("\n");

    return 0;
}
#include <stdio.h>
int main()
{

    int arr[10], count, i, j;

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while (arr[i] < 0);
    }

    for (i = 0; i < 10; i++)
    {
        count = 0;

        for (j = 0; j < 10; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }

        printf("There are %d elements smaller than %d \n", count, arr[i]);
    }

    return 0;
}
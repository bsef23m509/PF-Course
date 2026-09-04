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

    for (i = 1; i < 10 - 1; i++)
    {
        arr[i] = (arr[i - 1] + arr[i] + arr[i + 1]) / 3;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
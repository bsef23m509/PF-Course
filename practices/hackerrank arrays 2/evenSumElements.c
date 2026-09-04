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

    for (i = 0; i < 10 - 1; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if ((arr[i] + arr[j]) % 2 == 0)
                printf("%d %d ", arr[i], arr[j]);
        }
    }

    return 0;
}
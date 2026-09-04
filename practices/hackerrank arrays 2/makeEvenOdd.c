#include <stdio.h>

void makeEven(int arr[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
            arr[i] += 1;
    }
}

void makeOdd(int arr[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            arr[i] += 1;
    }
}

int main()
{

    int arr[10], eCount = 0, oCount = 0, i;

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while (arr[i] < 0);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            eCount++;
        else if (arr[i] % 2 != 0)
            oCount++;
    }

    if (eCount >= oCount)
    {
        makeEven(arr);
    }
    else
    {
        makeOdd(arr);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
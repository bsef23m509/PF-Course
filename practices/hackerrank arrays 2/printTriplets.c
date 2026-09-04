#include <stdio.h>

int returnAbsoluteDiffernce(int a, int b)
{
    int diff = a - b;
    if (diff < 0)
        return -(diff);
    return diff;
}

int add(int a, int b)
{
    return a + b;
}

void printNumbers(int a, int b, int c)
{
    printf("%d %d %d \n", a, b, c);
}

int main()
{

    int arr[10], i, j, k;

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while (arr[i] < 0);
    }

    for (i = 0; i < 10 - 2; i++)
    {
        for (j = i + 1; j < 10 - 1; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                if (add(arr[i], arr[j]) == arr[k])
                    printNumbers(arr[i], arr[j], arr[k]);

                else if (add(arr[j], arr[k]) == arr[i])
                    printNumbers(arr[i], arr[j], arr[k]);

                else if (add(arr[i], arr[k]) == arr[j])
                    printNumbers(arr[i], arr[j], arr[k]);

                else if (returnAbsoluteDiffernce(arr[i], arr[j]) == arr[k])
                    printNumbers(arr[i], arr[j], arr[k]);

                else if (returnAbsoluteDiffernce(arr[j], arr[k]) == arr[i])
                    printNumbers(arr[i], arr[j], arr[k]);

                else if (returnAbsoluteDiffernce(arr[i], arr[k]) == arr[j])
                    printNumbers(arr[i], arr[j], arr[k]);
            }
        }
    }

    return 0;
}
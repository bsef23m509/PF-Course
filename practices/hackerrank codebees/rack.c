#include <stdio.h>

int divideByTwo(int n)
{

    int count = 0;

    if (n == 1)
        return 0;

    while (n != 1)
    {
        n = n / 2;
        count++;
    }

    return count;
}

void program(int t)
{
    int i, start, end, temp;

    do
    {
        scanf("%d", &start);
    } while (start > 100000);

    do
    {
        scanf("%d", &end);
    } while (end > 100000 || start >= end);

    // if (start == 1 && t != 0)
    //     printf("\n");

    int counter = divideByTwo(start);

    for (i = start; i <= end; i++)
    {

        temp = divideByTwo(i);
        if (temp == counter)
            printf("%d ", i);
        else if (temp > counter)
        {
            counter = temp;
            printf("\n");
            printf("%d ", i);
        }
    }
}

int main()
{

    int t, i;

    do
    {
        scanf("%d", &t);
    } while (t >= 1000);

    for (i = 0; i < t; i++)
    {
        program(i);
        // printf("\n");
    }

    return 0;
}

// 3
// 1 6
// 1 11
// 5 20
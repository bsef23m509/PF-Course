#include <stdio.h>

int digest(int num)
{

    int temp, sum;

    // first check
    temp = num;
    sum = 0;
    while (temp > 0)
    {
        sum += (temp % 10);
        temp /= 10;
    }

    if (sum < 10)
    {
        return sum;
    }
    else
    // second check
    {
        temp = sum;
        sum = 0;
        while (temp > 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }

        if (sum < 10)
        {
            return sum;
        }
        // third check
        else
        {
            temp = sum;
            sum = 0;
            while (temp > 0)
            {
                sum += (temp % 10);
                temp /= 10;
            }

            return sum;
        }
    }
}

int main()
{

    int itemCount = 10;
    int nums[itemCount], digests[itemCount];
    int digestCounts[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j, count = 0, temp;

    // printf("%d ", digest(336));
    // printf("%d ", digest(759));

    // inputs
    for (i = 0; i < itemCount; i++)
    {
        do
        {
            scanf("%d", &nums[i]);
        } while (nums[i] <= 0);
    }

    // digests
    for (i = 0; i < itemCount; i++)
    {
        digests[i] = digest(nums[i]);
    }

    // printing input numbers

    // for (i = 0; i < itemCount; i++)
    // {
    //     printf("%d ", nums[i]);
    // }

    // printf("\n");

    // printing digests

    // for (i = 0; i < itemCount; i++)
    // {
    //     printf("%d ", digests[i]);
    // }

    // printf("\n");

    for (i = 0; i < itemCount; i++)
    {
        temp = digests[i];
        digestCounts[temp - 1] += 1;
    }

    for (i = 0; i < 9; i++)
    {
        if (digestCounts[i] > 0)
        {
            printf("%d elements have digest equal to %d\n", digestCounts[i], i + 1);
        }
    }

    return 0;
}
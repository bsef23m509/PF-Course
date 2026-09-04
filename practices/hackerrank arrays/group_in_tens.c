#include <stdio.h>

int main()
{

    int itemCount = 10;
    int nums[itemCount];
    int i, j, count = 0;
    int min, max, low_range, high_range;

    // printf("%d ", digest(336));
    // printf("%d ", digest(759));

    // inputs
    for (i = 0; i < itemCount; i++)
    {
        do
        {
            scanf("%d", &nums[i]);
        } while (nums[i] < 10 && nums[i] > 99);
    }

    min = nums[0];
    max = nums[0];

    for (i = 0; i < itemCount; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    low_range = (min / 10) * 10;
    high_range = ((max / 10) + 1) * 10;

    for (i = low_range; i < high_range; i += 10)
    {
        for (j = 0; j < itemCount; j++)
        {
            if (nums[j] >= i && nums[j] < i + 10)
            {
                printf("%d ", nums[j]);
                count++;
            }
        }

        if (count == 0)
            printf("No element in the group %d", i);

        printf("\n");
        count = 0;
    }

    return 0;
}
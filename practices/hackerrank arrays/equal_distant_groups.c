#include <stdio.h>

int main()
{

    int itemCount = 10, k;
    int nums[itemCount];
    int i, j, count = 0;
    int low_range, high_range;
    float step;

    // printf("%d ", digest(336));
    // printf("%d ", digest(759));

    // inputs
    do
    {
        scanf("%d", &k);

    } while (k > 9 || k < 1);

    for (i = 0; i < itemCount; i++)
    {
        do
        {
            scanf("%d", &nums[i]);

        } while (nums[i] >= 1000 || nums[i] < 1);
    }

    low_range = 1;
    high_range = 1000;
    step = (high_range / k) + 1;

    for (i = low_range; i < high_range; i += step)
    {
        for (j = 0; j < itemCount; j++)
        {
            if (nums[j] >= i && nums[j] < i + step - 1)
            {
                printf("%d ", nums[j]);
                count++;
            }
        }

        // printf("%d", i);

        if (count == 0)
            printf("There is no element in this group range");

        printf("\n");
        count = 0;
    }

    return 0;
}
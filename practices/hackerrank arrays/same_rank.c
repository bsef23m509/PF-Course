#include <stdio.h>

int main()
{

    int itemCount = 10;
    int nums[itemCount];
    int i, j, count = 0;
    int ones_i, tens_i;
    int ones_j, tens_j;

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

    for (i = 0; i < itemCount; i++)
    {

        ones_i = nums[i] % 10;
        tens_i = nums[i] / 10;

        for (j = 0; j < itemCount; j++)
        {
            ones_j = nums[j] % 10;
            tens_j = nums[j] / 10;

            if (ones_i == ones_j || tens_i == tens_j)
            {
                count++;
            }
        }

        if (count == 1)
            printf("There is no member in the rank of %d\n", nums[i]);
        else
            printf("There are %d other member in the rank of %d\n", count - 1, nums[i]);

        count = 0;
    }

    return 0;
}
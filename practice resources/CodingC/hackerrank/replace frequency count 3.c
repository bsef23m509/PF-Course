#include <stdio.h>

int replacenumber() {}

int main()
{

    int arr[10], arr2[10], count = 0, prev_count = 0, max_count = 0, countElemVal, maxCountElemVal = 0, max, i, j, k;

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while (arr[i] < 0);
    }

    for (i = 0; i < 10 - 4; i++)
    {
        max = 0;
        max_count = 0;

        for (j = i; j < i + 5; j++)
        {
            for (k = i; k < i + 5; k++)
            {
                if (arr[k] == arr[j])
                {
                    count++;
                }
            }

            if (count > 1)
            {
                countElemVal = arr[j];
            }
            else
            {
                if (arr[j] > max)
                    max = arr[j];
            }

            

            if (count > prev_count)
            {
                // prev_count = count;
                maxCountElemVal = countElemVal;
            }
            else if (count == prev_count && count > 1)
            {
                // prev_count = count;
                if (countElemVal > maxCountElemVal)
                    maxCountElemVal = countElemVal;
            }
            // printf("%d ", count);
            
            if (count > max_count)
                max_count = count;
            
            prev_count = count;
            count = 0;
            
            
        }

        // printf("%d %d %d", max_count, prev_count, maxCountElemVal);
       // printf("\n");
        
        
        for (j = i; j < i + 5; j++)
        {
            if (max_count > 1)
                arr2[j] = maxCountElemVal;
            else
            {
                arr2[j] = max;
            }
        }
        
        
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
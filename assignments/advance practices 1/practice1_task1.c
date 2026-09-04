#include <stdio.h>
int main()
{

    float num, sum = 0, average, max, max_2nd, min, min_2nd, temp;

    printf("Enter 1st number: ");
    scanf("%f", &max);
    sum = sum + max;

    printf("Enter 2st number: ");
    scanf("%f", &max_2nd);
    sum = sum + max_2nd;

    if (max_2nd > max)
    {
        temp = max;
        max = max_2nd;
        max_2nd = temp;
    }

    min = max_2nd;
    min_2nd = max;

    for (int i = 3; i <= 15; i++)
    {

        printf("Enter %dst number: ", i);
        scanf("%f", &num);

        sum = sum + num;

        if (num > max)
        {
            max_2nd = max;
            max = num;
        }
        else if (num > max_2nd)
            max_2nd = num;

        if (num < min)
        {
            min_2nd = min;
            min = num;
        }
        else if (num < min_2nd)
            min_2nd = num;
    }

    average = sum / 15.0;

    printf("Average: %.2f \n", average);
    printf("Maximum number: %.2f \n", max);
    printf("2nd maximum number: %.2f \n", max_2nd);
    printf("Minimum number: %.2f \n", min);
    printf("2nd minimum number: %.2f \n", min_2nd);

    return 0;
}
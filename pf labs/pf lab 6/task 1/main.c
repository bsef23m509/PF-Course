#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    float average;

    printf("enter 4 numbers: \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("Number 1: %d \n", num1);
    printf("Number 2: %d \n", num2);
    printf("Number 3: %d \n", num3);
    printf("Number 4: %d \n", num4);

    average = (num1 + num2 + num3 + num4) / 4.0;
    printf("Average: %f \n", average);

    if (num1 > average)
        printf("First number is larger than average \n");
    else
        printf("First number is smaller than average \n");

    if (num2 > average)
        printf("Second number is larger than average \n");
    else
        printf("Second number is smaller than average \n");

    if (num3 > average)
        printf("Third number is larger than average \n");
    else
        printf("Third number is smaller than average \n");

    if (num4 > average)
        printf("Fourth number is larger than average \n");
    else
        printf("Fourth number is smaller than average \n");

    return 0;
}
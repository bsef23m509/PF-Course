#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(0));

    int count = 1;
    int num1 = rand();
    int num2 = rand();

    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2);

    while (num1 < num2)
    {
        num1 = rand();
        num2 = rand();

        printf("num1: %d \n", num1);
        printf("num2: %d \n", num2);
        printf("\n");

        count++;
    }

    printf("Count: %d \n", count);

    return 0;
}
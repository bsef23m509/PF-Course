#include <stdio.h>
int main()
{

    int num;
    int first, last;

    scanf("%d", &num);

    last = num % 10;

    while (num > 0)
    {
        first = num % 10;
        num = num / 10;
    }

    printf("First digit: %d \n", first);
    printf("Last digit: %d \n", last);

    return 0;
}
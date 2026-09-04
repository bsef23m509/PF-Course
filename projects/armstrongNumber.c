#include <stdio.h>
#include <math.h>
int main()
{

    int num, armstrong, sum = 0, base = 0;

    scanf("%d", &num);

    int temp = num;

    while (temp > 0)
    {
        temp = temp / 10;
        base++;
    }

    temp = num;

    printf("no. of digit: %d \n", base);

    while (temp > 0)
    {
        armstrong = temp % 10;
        armstrong = pow(armstrong, base);
        sum = sum + armstrong;
        temp = temp / 10;
    }

    printf("Armstrong: %d \n", sum);

    if (sum == num)
        printf("The number is an armstrong number");
    else
        printf("The number is not an armstrong number");

    return 0;
}
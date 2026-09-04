#include <stdio.h>
int main()
{

    int num, i, sum, temp;

    scanf("%d", &num);
    sum = 0;
    i = 1;

    while (i <= num)
    {
        temp = i * i;
        sum = sum + temp;
        i++;
    }

    printf("%d", sum);

    return 0;
}
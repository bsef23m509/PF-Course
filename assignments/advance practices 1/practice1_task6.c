#include <stdio.h>
#include <math.h>

int main()
{

    int num, oct = 0, i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num / 8 != 0)
    {
        oct = oct + ((num % 8) * pow(10, i));
        num = num / 8;
        i++;
    }

    oct = oct + ((num % 8) * pow(10, i));

    printf("Number in octal form: %d", oct);

    return 0;
}
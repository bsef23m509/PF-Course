#include <stdio.h>
int main()
{

    FILE *input = fopen("abc.txt", "r");
    FILE *output = fopen("def.txt", "w");

    int count, x, i = 1;

    fscanf(input, "%d", &count);
    printf("%d \n", count);

    while (i <= count)
    {
        fscanf(input, "%d", &x);
        fprintf(output, "%d ", x * x);
        printf("%d ", x * x);
        i++;
    }

    return 0;
}
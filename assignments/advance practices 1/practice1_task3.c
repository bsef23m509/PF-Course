#include <stdio.h>
int main()
{

    int start, end, k;

    printf("Enter starting number, ending number and k separated by space: ");
    scanf("%d %d %d", &start, &end, &k);

    for (; start <= end; start++)
    {
        if (start % k == 0)
        {
            printf("%d ", start);
        }
    }

    return 0;
}
#include <stdio.h>

int len(char str[])
{
    int i = 0;
    for (i = 0; str[i] != 0; i++)
        ;
    return i;
}

void program(int t)
{
    char str[1000];
    int length, k, i = 0;

    do
    {
        scanf("%s", &str);
        length = len(str);
    } while (length > 1000);

    scanf("%d", &k);

    for (i = 0; str[i] != 0; i++)
    {
        str[i] = 'a' + (str[i] - 'a' + k) % 26;
    }
    printf("Case #%d: %s\n", t, str);
}

int main()
{

    int t, i;

    do
    {
        scanf("%d", &t);
    } while (t >= 1000);

    for (i = 1; i <= t; i++)
    {
        program(i);
        // printf("\n");
    }

    return 0;
}
#include <stdio.h>

int absolute(int n)
{
    if (n < 0)
        return -(n);
    return n;
}

int len(char str[])
{
    int i = 0;
    for (i = 0; str[i] != 0; i++)
        ;
    return i;
}

int totalLeftBracketCount(char str[])
{
    int count = 0, i;

    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '(')
            count++;
    }

    return count;
}

int totalRightBracketCount(char str[])
{
    int count = 0, i;

    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == ')')
            count++;
    }

    return count;
}

int leftBracketSequence(char *str)
{
    int i;

    for (i = 0; str[i] != 0 && str[i] != ')'; i++)
        ;
    return i;
}

int rightBracketSequence(char *str)
{
    int i;

    for (i = 0; str[i] != 0 && str[i] != '('; i++)
        ;
    return i;
}

void program(int t)
{
    char str[100000];
    int length, count = 0;
    int i = 0;
    int totalLeftBracketC, totalRightBracketC;
    int sequenceLeftBracketC, sequenceRightBracketC;
    int temp;

    do
    {
        scanf("%s", str);
        length = len(str);
    } while (length <= 0 || length >= 100000);

    // totalLeftBracketC = totalLeftBracketCount(str);
    // totalRightBracketC = totalRightBracketCount(str);

    for (i = 0; str[i] != 0;)
    {
        sequenceLeftBracketC = leftBracketSequence(&str[i]);
        sequenceRightBracketC = rightBracketSequence(&str[i]);

        if (str[i] == ')')
        {
            i += (sequenceRightBracketC + sequenceLeftBracketC);
            count += (sequenceRightBracketC + sequenceLeftBracketC);
        }
        else if (sequenceLeftBracketC == 0)
        {
            if (leftBracketSequence(&str[i + sequenceRightBracketC]) == sequenceRightBracketC)
            {
                i += (sequenceRightBracketC + sequenceLeftBracketC) * 2;
            }
            else
            {
                temp = absolute(leftBracketSequence(&str[i + sequenceRightBracketC]) - sequenceRightBracketC);
                count += temp;
                i += (sequenceRightBracketC + leftBracketSequence(&str[i + sequenceRightBracketC]));
            }
        }
        else if (sequenceRightBracketC == 0)
        {
            if (rightBracketSequence(&str[i + sequenceLeftBracketC]) == sequenceLeftBracketC)
            {
                i += (sequenceRightBracketC + sequenceLeftBracketC) * 2;
            }
            else
            {
                temp = absolute(rightBracketSequence(&str[i + sequenceLeftBracketC]) - sequenceLeftBracketC);
                count += temp;
                i += (rightBracketSequence(&str[i + sequenceLeftBracketC]) + sequenceLeftBracketC);
            }
        }
        // printf("%d \n", i);
    }

    printf("%d\n", count);
}

int main()
{

    int t, i;

    do
    {
        scanf("%d", &t);
    } while (t > 1000);

    for (i = 1; i <= t; i++)
    {
        program(i);
        // printf("\n");
    }

    return 0;
}
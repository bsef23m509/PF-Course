#include <stdio.h>

int main()
{
    int roll1, roll2, roll3;

    printf("enter 3 roll dice turns: \n");
    scanf("%d %d %d", &roll1, &roll2, &roll3);

    printf("Number 1: %d \n", roll1);
    printf("Number 2: %d \n", roll2);
    printf("Number 3: %d \n", roll3);

    if (roll1 == 1 && roll2 == 1 && roll3 == 1)
        printf("One appear three times \n");
    else if ((roll1 == 1 && roll2 == 1) || (roll1 == 1 && roll3 == 1) || (roll2 == 1 && roll3 == 1))
        printf("One appear two times \n");
    else if ((roll1 == 1 && roll2 != 1 && roll3 != 1) || (roll1 != 1 && roll2 == 1 && roll3 != 1) || (roll1 != 1 && roll2 != 1 && roll3 == 1))
        printf("One appear one time \n");

    if (roll1 == 2 && roll2 == 2 && roll3 == 2)
        printf("Two appear three times \n");
    else if ((roll1 == 2 && roll2 == 2) || (roll1 == 2 && roll3 == 2) || (roll2 == 2 && roll3 == 2))
        printf("Two appear two times \n");
    else if ((roll1 == 2 && roll2 != 2 && roll3 != 2) || (roll1 != 2 && roll2 == 2 && roll3 != 2) || (roll1 != 2 && roll2 != 2 && roll3 == 2))
        printf("Two appear one time \n");

    if (roll1 == 3 && roll2 == 3 && roll3 == 3)
        printf("Three appear three times \n");
    else if ((roll1 == 3 && roll2 == 3) || (roll1 == 3 && roll3 == 3) || (roll2 == 3 && roll3 == 3))
        printf("Three appear two times \n");
    else if ((roll1 == 3 && roll2 != 3 && roll3 != 3) || (roll1 != 3 && roll2 == 3 && roll3 != 3) || (roll1 != 3 && roll2 != 3 && roll3 == 3))
        printf("Three appear one time \n");

    if (roll1 == 4 && roll2 == 4 && roll3 == 4)
        printf("Four appear three times \n");
    else if ((roll1 == 4 && roll2 == 4) || (roll1 == 4 && roll3 == 4) || (roll2 == 4 && roll3 == 4))
        printf("Four appear two times \n");
    else if ((roll1 == 4 && roll2 != 4 && roll3 != 4) || (roll1 != 4 && roll2 == 4 && roll3 != 4) || (roll1 != 4 && roll2 != 4 && roll3 == 4))
        printf("Four appear one time \n");

    if (roll1 == 5 && roll2 == 5 && roll3 == 5)
        printf("Five appear three times \n");
    else if ((roll1 == 5 && roll2 == 5) || (roll1 == 5 && roll3 == 5) || (roll2 == 5 && roll3 == 5))
        printf("Five appear two times \n");
    else if ((roll1 == 5 && roll2 != 5 && roll3 != 5) || (roll1 != 5 && roll2 == 5 && roll3 != 5) || (roll1 != 5 && roll2 != 5 && roll3 == 5))
        printf("Five appear one time \n");

    if (roll1 == 6 && roll2 == 6 && roll3 == 6)
        printf("Six appear three times \n");
    else if ((roll1 == 6 && roll2 == 6) || (roll1 == 6 && roll3 == 6) || (roll2 == 6 && roll3 == 6))
        printf("Six appear two times \n");
    else if ((roll1 == 6 && roll2 != 6 && roll3 != 6) || (roll1 != 6 && roll2 == 6 && roll3 != 6) || (roll1 != 6 && roll2 != 6 && roll3 == 6))
        printf("Six appear one time \n");

    return 0;
}
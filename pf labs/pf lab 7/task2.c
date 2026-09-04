#include <stdio.h>
int main()
{

    int runs1, runs2, wic1, wic2;

    printf("Enter runs of team 1 (should not be negative): ");
    scanf("%d", &runs1);

    while (runs1 < 0)
    {
        printf("Enter runs of team 1 (should not be negative): ");
        scanf("%d", &runs1);
        printf("\n");
    };

    printf("Enter runs of team 2 (should not be negative): ");
    scanf("%d", &runs2);

    while (runs2 < 0)
    {
        printf("Enter runs of team 2 (should not be negative): ");
        scanf("%d", &runs2);
    };

    printf("Enter wickets of team 1 (should not be negative or greater than 10): ");
    scanf("%d", &wic1);

    while (wic1 < 0 || wic1 > 10)
    {
        printf("Enter wickets of team 1 (should not be negative or greater than 10): ");
        scanf("%d", &wic1);
    };

    printf("Enter wickets of team 2 (should not be negative or greater than 10): ");
    scanf("%d", &wic2);

    while (wic2 < 0 || wic2 > 10)
    {
        printf("Enter wickets of team 2 (should not be negative or greater than 10): ");
        scanf("%d", &wic2);
        printf("\n");
    };

    if (runs2 > runs1)
    {
        if (wic2 == 10)
        {
            printf("Team 2 has more runs than team 1 so it can't have 10 wickets\n");
            while (wic2 < 0 || wic2 >= 10)
            {
                printf("Enter wickets of team 2 (should not be negative or greater than 10): ");
                scanf("%d", &wic2);
                printf("\n");
            };
        }
    }

    printf("Runs of team 1: %d \n", runs1);
    printf("Runs of team 2: %d \n", runs2);
    printf("Wickets of team 1: %d \n", wic1);
    printf("Wickets of team 2: %d \n", wic2);

    if (runs2 > runs1)
        printf("Team 2 has won by %d wickets \n", 10 - wic2);
    else if (runs1 > runs2)
        printf("Team 1 has won by %d runs \n", runs1 - runs2);
    else if (runs1 == runs2 && wic1 < wic2)
        printf("Team 1 won by 1 run \n");
    else if (runs1 == runs2 && wic2 < wic1)
        printf("Team 2 won by %d wickets \n", wic1 - wic2);
    else
        printf("The match is a draw \n");

    return 0;
}
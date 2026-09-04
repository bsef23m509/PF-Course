#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(0));

    int i = 1;
    int choice;
    int num1, num2, ans, input, score = 0;

    while (i <= 10)
    {
        choice = rand() % 3 + 1;

        if (choice == 1)
        {
            num1 = rand() % 100;
            num2 = rand() % 100;

            ans = num1 + num2;

            printf("Enter the answer to %d + %d: ", num1, num2);
            scanf("%d", &input);

            if (input == ans)
            {
                printf("Correct Answer \n\n");
                score++;
            }
            else
                printf("Incorrect Answer \n\n");
        }
        else if (choice == 2)
        {
            num1 = rand() % 90 + 10;
            num2 = rand() % num1;

            ans = num1 - num2;

            printf("Enter the answer to %d - %d: ", num1, num2);
            scanf("%d", &input);

            if (input == ans)
            {
                printf("Correct Answer \n\n");
                score++;
            }
            else
                printf("Incorrect Answer \n\n");
        }
        else if (choice == 3)
        {

            num1 = rand() % 10;
            num2 = rand() % 10;

            ans = num1 * num2;

            printf("Enter the answer to %d * %d: ", num1, num2);
            scanf("%d", &input);

            if (input == ans)
            {
                printf("Correct Answer \n\n");
                score++;
            }
            else
                printf("Incorrect Answer \n\n");
        }

        i++;
    }
    printf("Youy score is %d out of 10", score);

    return 0;
}
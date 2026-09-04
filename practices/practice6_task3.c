#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int num, ones, tens;

    for (int i = 0; i < 10; i++)
    {
        num = rand() % 100 + 1;

        // printing number in digits
        printf("%d \n", num);

        ones = num % 10;
        tens = num / 10;

        // printing number in english

        //  10 conditions then else
        if (num == 100)
            printf("Hundred \n");
        else if (num == 11)
            printf("Eleven \n");
        else if (num == 12)
            printf("Twelve \n");
        else if (num == 13)
            printf("Thirteen \n");
        else if (num == 14)
            printf("Fourteen \n");
        else if (num == 15)
            printf("Fifteen \n");
        else if (num == 16)
            printf("Sixteen \n");
        else if (num == 17)
            printf("Seventeen \n");
        else if (num == 18)
            printf("Eighteen \n");
        else if (num == 19)
            printf("Nineteen \n");
        else
        {

            //  9 conditions
            if (tens == 0)
                printf("");
            else if (tens == 2)
                printf("Twenty \n");
            else if (tens == 3)
                printf("Thirty \n");
            else if (tens == 4)
                printf("Fourty \n");
            else if (tens == 5)
                printf("Fifty \n");
            else if (tens == 6)
                printf("Sixty \n");
            else if (tens == 7)
                printf("Seventy \n");
            else if (tens == 8)
                printf("Eighty \n");
            else if (tens == 9)
                printf("Ninety \n");

            //  9 conditions
            if (ones == 0)
                printf("\n");
            else if (ones == 2)
                printf("Two \n");
            else if (ones == 3)
                printf("Three \n");
            else if (ones == 4)
                printf("Four \n");
            else if (ones == 5)
                printf("Five \n");
            else if (ones == 6)
                printf("Six \n");
            else if (ones == 7)
                printf("Seven \n");
            else if (ones == 8)
                printf("Eight \n");
            else if (ones == 9)
                printf("Nine \n");
        }

        // printing number digits indivitually in english

        // 9 conditions

        if (num == 100)
            printf("One Zero Zero");
        else
        {

            if (tens == 0)
                printf("");
            else if (tens == 1)
                printf("One ");
            else if (tens == 2)
                printf("Two ");
            else if (tens == 3)
                printf("Three ");
            else if (tens == 4)
                printf("Four ");
            else if (tens == 5)
                printf("Five ");
            else if (tens == 6)
                printf("Six ");
            else if (tens == 7)
                printf("Seven ");
            else if (tens == 8)
                printf("Eight ");
            else if (tens == 9)
                printf("Nine ");

            // 9 conditions
            if (ones == 0)
                printf("Zero");
            else if (ones == 1)
                printf("One ");
            else if (ones == 2)
                printf("Two ");
            else if (ones == 3)
                printf("Three ");
            else if (ones == 4)
                printf("Four ");
            else if (ones == 5)
                printf("Five ");
            else if (ones == 6)
                printf("Six ");
            else if (ones == 7)
                printf("Seven ");
            else if (ones == 8)
                printf("Eight ");
            else if (ones == 9)
                printf("Nine ");
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
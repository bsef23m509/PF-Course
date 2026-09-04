#include <stdio.h>
int main()
{

    int slots, start, end, prev_end;
    int day = 1;
    int day1_h = 0, day2_h = 0, day3_h = 0, day4_h = 0, day5_h = 0, total_h = 0;

    printf("Enter number of slots: ");
    scanf("%d", &slots);
    printf("\n");

    for (int i = 1; i <= slots; i++)
    {

        // input and validation

        printf("Enter %dth slot starting time: ", i);
        scanf("%d", &start);

        if (start < 0 || start > 23)
        {
            printf("Input hours in 24 hour format i.e from 0-23 \n");
            i--;
            continue;
        }

        printf("Enter %dth slot ending time: ", i);
        scanf("%d", &end);

        if (end < 0 || end > 23)
        {
            printf("Input hours in 24 hour format i.e from 0-23 \n");
            i--;
            continue;
        }

        printf("\n");

        if ((end < start && (24 - start) + end > 12) || (end - start > 12) || (end == start))
        {
            printf("Slots can only be 1-12 hours long \n\n");
            i--;
            continue;
        }
        else if ((start == prev_end) || (prev_end > start && (24 - prev_end) + start > 12) || start - prev_end > 12)
        {
            printf("Differnt between slots can only be 1-12 hours long \n\n");
            i--;
            continue;
        }

        // calculating hours

        if (end > start)
        {
            // incrementing day if first slot is like 18-22 and then next is on next day like 3-7
            if (prev_end > start)
                day++;

            if (day == 1)
                day1_h += (end - start);
            else if (day == 2)
                day2_h += (end - start);
            else if (day == 3)
                day3_h += (end - start);
            else if (day == 4)
                day4_h += (end - start);
            else if (day == 5)
                day5_h += (end - start);

            if (day > 5)
            {
                printf("Days gone beyond 5 and hence those hours were not added \n");
            }
        }

        else if (start > end)
        {
            if (day == 1)
            {
                day1_h += (24 - start);
                day2_h += end;
                day++;
            }
            else if (day == 2)
            {
                day2_h += (24 - start);
                day3_h += end;
                day++;
            }
            else if (day == 3)
            {
                day3_h += (24 - start);
                day4_h += end;
                day++;
            }
            else if (day == 4)
            {
                day4_h += (24 - start);
                day5_h += end;
                day++;
            }
            else if (day == 5)
            {
                day5_h += (24 - start);
                printf("The hours in the slots exceeded to beyond day 5 by %d hours and they weren't added \n", end);
                day++;
            }
        }

        // used in validation of input

        prev_end = end;
    }

    total_h = day1_h + day2_h + day3_h + day4_h + day5_h;

    printf("\n");
    printf("Day 1 working hours: %d \n", day1_h);
    printf("Day 2 working hours: %d \n", day2_h);
    printf("Day 3 working hours: %d \n", day3_h);
    printf("Day 4 working hours: %d \n", day4_h);
    printf("Day 5 working hours: %d \n", day5_h);

    printf("\n");
    printf("Total working hours: %d \n", total_h);

    return 0;
}
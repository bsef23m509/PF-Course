#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(0));

    int i = 1;
    int roll = 30;
    int midM, finalM, sessM, totalM, Grade;
    int passRoll, failRoll = 0;
    int overallTotalSum = 0, midTotalSum = 0, finalTotalSum = 0, sessTotalSum = 0;
    float overallAvg, midAvg, finalAvg, sessAvg;
    int overallMax = 0, midMax = 0, finalMax = 0, sessMax = 0;
    int overallMin = 100, midMin = 35, finalMin = 40, sessMin = 25;

    printf("Roll No.     Mid  \t    Final     Sessional     Total       Grade \n");

    while (i <= roll)
    {
        midM = rand() % 36;
        finalM = rand() % 41;
        sessM = rand() % 26;
        totalM = midM + finalM + sessM;

        printf("%d \t     %d  \t     %d  \t  %d  \t    %d  \t", i, midM, finalM, sessM, totalM);

        if (totalM > 85)
            printf("A \n");
        else if (totalM >= 80 && totalM < 85)
            printf("A- \n");
        else if (totalM >= 75 && totalM < 80)
            printf("B+ \n");
        else if (totalM >= 70 && totalM < 75)
            printf("B \n");
        else if (totalM >= 65 && totalM < 70)
            printf("B- \n");
        else if (totalM >= 61 && totalM < 65)
            printf("C+ \n");
        else if (totalM >= 58 && totalM < 61)
            printf("C \n");
        else if (totalM >= 55 && totalM < 58)
            printf("C- \n");
        else if (totalM >= 50 && totalM < 54)
            printf("D \n");
        else
        {
            printf("F \n");
            failRoll++;
        }

        overallTotalSum = overallTotalSum + totalM;
        midTotalSum = midTotalSum + midM;
        finalTotalSum = finalTotalSum + finalM;
        sessTotalSum = sessTotalSum + sessM;

        if (totalM > overallMax)
            overallMax = totalM;
        if (midM > midMax)
            midMax = midM;
        if (finalM > finalMax)
            finalMax = finalM;
        if (sessM > sessMax)
            sessMax = sessM;

        if (totalM < overallMin)
            overallMin = totalM;
        if (midM < midMin)
            midMin = midM;
        if (finalM < finalMin)
            finalMin = finalM;
        if (sessM < sessMin)
            sessMin = sessM;

        i++;
    }

    passRoll = roll - failRoll;

    printf("\n\n");

    printf("Total: %d \n", roll);
    printf("Pass: %d \n", passRoll);
    printf("Fail: %d \n", failRoll);

    overallAvg = overallTotalSum / 30.0;
    midAvg = midTotalSum / 30.0;
    finalAvg = finalTotalSum / 30.0;
    sessAvg = sessTotalSum / 30.0;

    printf("\n\n");

    printf("Average Marks: %f \n", overallAvg);
    printf("MidTerm Average Marks: %f \n", midAvg);
    printf("FinalTerm Average Marks: %f \n", finalAvg);
    printf("Sessional Average Marks: %f \n", sessAvg);

    printf("\n\n");

    printf("Maximum Marks: %d \n", overallMax);
    printf("MidTerm Maximum Marks: %d \n", midMax);
    printf("FinalTerm Maximum Marks: %d \n", finalMax);
    printf("Sessional Maximum Marks: %d \n", sessMax);

    printf("\n\n");

    printf("Minimum Marks: %d \n", overallMin);
    printf("MidTerm Minimum Marks: %d \n", midMin);
    printf("FinalTerm Minimum Marks: %d \n", finalMin);
    printf("Sessional Minimum Marks: %d \n", sessMin);

    return 0;
}
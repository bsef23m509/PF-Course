#include <stdio.h>
#include <stdlib.h>

void input(int num[], int const size)
{

    int i;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
}

int main()
{

    int cities, *arr, *fuels, average, i, j, temp;
    int validCity, maxFuel = 0, maxDisttance = 0;

    do
    {
        scanf("%d", &cities);
    } while (cities < 1 || cities > 10000);

    arr = (int *)malloc(cities * sizeof(int));
    fuels = (int *)malloc(cities * sizeof(int));

    input(arr, cities);
    input(fuels, cities);

    scanf("%d", &average);

    for (i = 0; i < cities; i++)
    {
        if (fuels[i] > maxFuel)
            maxFuel = fuels[i];
        if (arr[i] > maxDisttance)
            maxDisttance = arr[i];
    }

    for (i = 0; i < cities; i++) {
        for (j = 1; j < cities; j++)
        {
            temp = i + j;
            if (temp >= cities)
                temp = temp - cities;

            if (fuels[i] == maxFuel && fuels[i] * average > temp)
                validCity = i;
        }
    }

    printf("%d", validCity);

    free(arr);
    free(fuels);
    return 0;
}
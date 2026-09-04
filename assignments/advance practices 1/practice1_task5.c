#include <stdio.h>
int main()
{

    int sides;

    printf("Enter number of sides (can be 0, 3, or 4) : ");
    scanf("%d", &sides);

    while (sides != 0 && sides != 3 && sides != 4)
    {

        printf("Sides can be 0, 3, or 4 only \n");
        printf("Enter number of sides: ");
        scanf("%d", &sides);
    }

    if (sides == 0)
    {
        int radius;
        float area;
        printf("Enter Radius: ", &radius);
        scanf("%d", &radius);

        area = 3.14 * (radius * radius);

        printf("Shape is circle and area is: %.2f", area);
    }
    else if (sides == 3)
    {
        int height, width;
        float area;

        printf("Enter Height: ", &height);
        scanf("%d", &height);
        printf("Enter Width: ", &width);
        scanf("%d", &width);

        area = 0.5 * (width * height);

        printf("Shape is triangle and area is: %.2f", area);
    }
    else if (sides == 4)
    {
        int height, width, area;

        printf("Enter Height: ", &height);
        scanf("%d", &height);
        printf("Enter Width: ", &width);
        scanf("%d", &width);

        area = width * height;

        if (height == width)
            printf("Shape is square and area is: %d", area);
        else
            printf("Shape is rectangle and area is: %d", area);
    }

    return 0;
}
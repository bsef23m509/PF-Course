#include <stdio.h>
#include <math.h>
int main()
{

    int a = 0, b, c;

    while (a == 0)
    {
        printf("Enter a (should not be zero): ");
        scanf("%d", &a);
    };

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("a: %d \n", a);
    printf("b: %d \n", b);
    printf("c: %d \n", c);

    int disc = b * b - 4 * a * c;

    int root1, root2;

    root1 = (-b + sqrt(disc)) / (2 * a);
    root2 = (-b - sqrt(disc)) / (2 * a);

    if (disc < 0)
    {
        printf("Sorry, the roots are imaginary \n");
    }
    else
    {

        printf("Disc: %d \n", disc);
        printf("Root 1: %d \n", root1);
        printf("Root 2: %d \n", root2);
    }

    return 0;
}
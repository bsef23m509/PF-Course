#include <stdio.h>
#include <math.h>

float toRadian(float degree)
{
    return degree * 22 / 7 / 180;
}
float absolute_value(float value)
{
    if (value >= 0)
        return value;
    else
        return -(value);
}
#define EPSILON 0.001

int main()
{
    float angle;
    float cos_value, sin_value;
    float cos_floor, sin_floor;
    float cos_ceil, sin_ceil;
    float cos_absolute, sin_absolute;
    printf(" Angle\t       Sin         Cos             ");
    printf("sin_floor            cos_floor            ");
    printf("sin_ceil           cos_ceil         ");
    printf("sin_absolute           cos_absolute         ");
    printf("\n");

    for (angle = 0; angle <= 180.0; angle += 7.5)
    {
        cos_value = cos(toRadian(angle));
        sin_value = sin(toRadian(angle));
        // To check and set value zero against some value very close to zero bout not exactly zero
        if (cos_value < EPSILON && cos_value > -EPSILON)
            cos_value = 0;
        // To check and set value one against some value very close to one bout not exactly one
        if (cos_value < 1 + EPSILON && cos_value > 1 - EPSILON)
            cos_value = 1;
        // To check and set value -1 against some value very close to -1 bout not exactly -1
        if (cos_value < -1 + EPSILON && cos_value > -1 - EPSILON)
            cos_value = -1;
        // To check and set value 0.5 against some value very close to 0.5 bout not exactly 0.5
        if (cos_value < 0.5 + EPSILON && cos_value > 0.5 - EPSILON)
            cos_value = 0.5;
        if (sin_value < EPSILON && sin_value > -EPSILON)
            sin_value = 0;
        if (sin_value < 1 + EPSILON && sin_value > 1 - EPSILON)
            sin_value = 1;
        if (sin_value < 0.5 + EPSILON && sin_value > 0.5 - EPSILON)
            sin_value = 0.5;
        if (sin_value < -1 + EPSILON && sin_value > -1 - EPSILON)
            sin_value = -1;

        //  ceil and floor
        sin_floor = floor(sin_value);
        cos_floor = floor(cos_value);
        sin_ceil = ceil(sin_value);
        cos_ceil = ceil(cos_value);

        // absolute
        sin_absolute = absolute_value(sin_value);
        cos_absolute = absolute_value(cos_value);

        printf(" %f      %f    %f        ", angle, sin_value, cos_value);
        printf("%f             %f             ", sin_floor, cos_floor);
        printf("%f           %f         ", sin_ceil, cos_ceil);
        printf("%f                %f", sin_absolute, cos_absolute);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    // Varibles:

    //  In C, variables are used to store and manipulate data in a program.
    // They are like containers that hold different types of information,
    // and they have names that you assign. Variables in C must be declared before
    // they are used, specifying their data type. Data types determine the kind
    // of data that a variable can store and how that data is stored in memory.

    // int:

    // The "int" data type is used to store integer values. It typically occupies 4 bytes
    // of memory and can hold whole numbers, both positive and negative.

    int age = 25;

    // float:

    // The "float" data type is used to store single-precision
    // floating-point numbers. It typically occupies 4 bytes of
    // memory and is used for values with decimal points.

    float price = 19.99;

    // double:

    // The double data type is used to store double-precision
    // floating-point numbers. It typically occupies 8 bytes of memory
    //  and is used for values with higher precision than float.

    double pi = 3.14159265359;

    // char:

    //  The "char" data type is used to store a single character.
    // It typically occupies 1 byte of memory and can hold individual
    // characters like letters, digits, or symbols.

    char grade = 'A';

    // Format Specifiers:

    // In C, format specifiers are special placeholders used in functions
    // like printf and scanf to format input and output operations.
    // They instruct the compiler on how to interpret and display data of
    // different types. Format specifiers are preceded by the percent sign
    // (%) and are used to specify the type and format of the data being read or written.

    printf("Age: %d\n", age);
    printf("Price: %f\n", price);
    printf("Pi: %lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
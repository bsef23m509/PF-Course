#include <stdio.h>

int main()
{
    // Escape Sequences:

    // The sequence of character which has indirect meaning when it placed within double quotes are called  escape sequnces.
    // There are many escape sequence characters. We'll discuss 2 of those here. \n and \t.

    // \n (Line Feed Character) :

    // it forces the cursor to change its position to the beginning of the next line on the screen. It is also called new line
    // character.

    printf("This is a line.");
    printf("\nThis is on new line.");

    printf("\n-----------------\n");

    // \t (Line Feed Character) :

    // It moves cursor to the next tab position. Normally in code it is used to give 8 spaces in the output of the program where it is
    // placed. But it is used to format output in coloumns.

    // Print a header row
    printf("Name\tAge\tCity\n");

    // Print some data in columns
    printf("John\t25\tNew York\n");
    printf("Alice\t30\tLos Angeles\n");
    printf("Bob\t22\tChicago\n");
    printf("Eve\t28\tSan Francisco\n");

    printf("\n-----------------\n");

    return 0;
}
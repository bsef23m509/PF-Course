/*

-> #include is basically a preprocessor directive (as it is read by preprocessor)
which is used to involve or include the user or system-defined libraries
in the below C code. These libraries or the header file names which we want
to include in the code are added after the #include directive.

-> stdio.h is a header file. std means standard and io means input/output.
this file is included in almost all programs as we require input/output
in all programs.

*/
#include <stdio.h>

// main is the function that is where computer satrts executing the program.
// It must be named otherwise it will not be executed.

int main()
{

    // We use the printf() function to print things on the console i.e cmd.
    printf("Hello World");

    // We return 0 in main function to indicate the
    // operating system that program was successfully terminated.
    // If 1 is returned, that means unsuccessful termination.
    return 0;
}
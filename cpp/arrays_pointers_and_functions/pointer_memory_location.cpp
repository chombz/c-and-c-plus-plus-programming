//C++ program that displays a number and memory location using pointers

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //variables to be used in the program
    int e = 32, *ptrN;

    //Assign the memory address of e to a pointer
    ptrN = &e;

    //Display the value of e and its memory location
    printf("Value of e -> %d"
          "\nMemory location of e %x"
          "\n value pointer to by ptrN -> %d\n", e, ptrN, *ptrN);
    return 0;
}



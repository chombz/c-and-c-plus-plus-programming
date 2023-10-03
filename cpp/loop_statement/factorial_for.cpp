//C++ program that accepts a number from the user and calculates its factorial
//using a for loop without a body

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //Variables to be used in the program
    int e = 1;//variable used in for display program
    int usernum = -1;
    long int factorial = 1;

    //prompt the user for a +ve number whose factorial they wish to know
    //Ensure the user enters only positive values
    while(usernum < 0)
    {
        printf("Please enter a positive number and I,ll tell you its factorial -> \n");
        scanf("%d",&usernum);
    }

    //Calculate the factorial using a body less for loop
    for(; e <= usernum; factorial *= e++);

    //display the factorial
    printf("The factorial, of %d is %d\n", usernum, factorial);
    return 0;
}



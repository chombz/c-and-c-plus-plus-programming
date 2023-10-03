//C++ program that demonstrates the ranged for loop

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //Declare an array of student across in am exam
    int scores[] = {85, 91, 98, 71, 35, 100, 65, 60, 67, 70, 55};
    int n = 1;//Variable used for display purposes

    for(int score : scores)
    {
        //Display the score using a printf statement
        printf("Student %2d score %d %%\n" ,n ,score);
        n++;
    }
    return 0;
}



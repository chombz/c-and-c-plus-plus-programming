//C++ program that displays the first ten integers using a for loop

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //variables declaration
    int e = 1;//looping variable


    for(; e <= 10; e++)
    {
        if(e < 10)
            cout<<e<<", ";
        else
            cout<<e<<"."<<endl;
    }
    return 0;
}



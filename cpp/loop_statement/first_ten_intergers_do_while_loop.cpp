//C++ program that displays the first ten integers using a do...while loop

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //variables declaration
    int e = 1;//looping variable


    do
    {
        if(e < 10)
            cout<<e<<", ";
        else
            cout<<e<<"."<<endl;
        e++;

    }while( e <= 10);
    return 0;
}



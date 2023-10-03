//C++ program that displays the first ten integers using a while loop

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //variables declaration
    int e = 1;//looping variable

    while( e <= 10)
    {
        if(e < 10)
            cout<<e<<", ";
        else
            cout<<e<<"."<<endl;
        e++;
    }return 0;
}



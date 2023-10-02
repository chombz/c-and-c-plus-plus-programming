//C++ program that displays a star pattern using a nested for loop

///Pre-processor Directives
#include <iostream>
using namespace :: std;

///Main program begins with a program execution
int main()
{
    //variables declaration
    int e = 1, c;//looping variable
    int rows;

    //prompt the user for the number of rows
    cout<<"Please enter the number of rows for the pattern"<<endl;
    cin>>rows;
    for(; e <= rows; e++)
    {
        for(c = 1; c <= e; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



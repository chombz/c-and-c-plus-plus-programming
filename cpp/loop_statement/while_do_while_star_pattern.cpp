//C++ program that displays a star pattern using a nested do...while loop

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

    while( e <= rows )
    {
        c = 1;
        do
        {
            cout<<"*";
            ++c;
        }while(c <= e);
        cout<<"\n";
        e++;
    }
    return 0;
}



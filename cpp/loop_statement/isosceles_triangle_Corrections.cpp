/* A Cpp program to display an isosceles triangle using nested loops */
#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int columns = rows;
    int e, c;//looping variables

    for(e=1; e<=rows; e++)//loop to display the triangle
    {
        for(c=1; c<=rows; c++ )
        {
           if(c >=columns)
                cout<<"* ";
           else
            cout<<" ";
        }
        columns--;
        cout<<"\n";
    }
    return 0;
}

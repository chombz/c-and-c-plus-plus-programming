// C++ program that displays isosceles star pattern with 2 nested loops

#include <iostream>
using namespace std;

int main()
{
    //variables
    int e;
    int c;
    int rows;
    int lining;//this is for lining the stars in each row


    rows  = 16;
    lining = rows;

    for(e = 1; e <= rows; e++)
    {
        for(c = 1; c <= rows; c++)
        {
            if(e >= lining)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        lining--;
        cout<<endl;
    }
    return 0;
}

//C++ program that storage classes

///Pre-processor Directives
#include <iostream>
using namespace :: std;

//function definition for printauto()
void printauto()
{
    //variable used in the function
    static int e = 0; //will retain value between function calls
    int c = 0;

    //Display the values of i & j before incrementing them
    cout<<"\n value of e before incrementing = " <<e;
    cout<<"\n value of c before incrementing = " <<c;

    //Increment the value of i & j
    e += 10;
    c += 10;

    //Display the value of i & j after incrementing then
    cout<<"\n value of e after incrementing = " <<e;
    cout<<"\n value of c after incrementing = " <<c;
}//end of function printauto

///Main program begins with a program execution
int main()
{
    //clear the screen
    printauto();
    cout<<endl;
    printauto();
    cout<<endl;
    printauto();
    return 0;
}//End of function main()



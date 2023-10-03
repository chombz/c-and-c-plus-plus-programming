//C++ program that demonstrates how to use a recursive function
//to calculate the factorial of a number

///Pre-processor Directives
#include <iostream>
using namespace :: std;

//function prototype
long int calcfactorial(int num);

///Main program begins with a program execution
int main()
{
    //prompt the user for a number whose factorial they wish to calculate
    cout<<"Please enter a number and I'll tell you its factorial -> \n";

    int usernum;
    cin>>usernum;

    //Calculate and display the result
    cout<<"\nFactorial of "<<usernum<<" is "<<calcfactorial(usernum)<<endl;
    return 0;
}//End Function main()

///Function definition for calcfactorial
long int calcfactorial(int num)
{
    if(num <= 1)
        return 1;
    else
        return(num * calcfactorial(num - 1));//recursive function call
}//end of function



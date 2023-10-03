//THis program is to write and display the 
//output of the user Name, Age and Salary

#include <iostream>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Variables to be used in the program
    string userName;
    int age= 0;
    float salary = 0.00;

    //cascaded input
    //prompt the user for their details
    cout<<"Please enter your name: \n";
    cin>>userName;
    cout<<"Please enter your age and salary: \n";
    cin>>age>>salary;

    //Display the user's details using cascade output
    cout<<"Your Details\n-----------------\n";
    cout<<"Name: ";
    cout.width(12);
    cout<<userName<<endl;
    cout<<"Age: ";
    cout.width(12);
    cout<<age<<endl;
    cout<<"Salary: ";
    cout.width(12);
    cout<<salary<<endl;
    cout<<"----------------------------\n";
}

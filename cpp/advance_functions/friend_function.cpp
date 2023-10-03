//C++ program that demonstrates friend functions

///Pre-processor Directives
#include <iostream>
using namespace :: std;

//Class definition
class Class1
{
    private:
        int firstNum;

    public:
        //para metered constructor
        Class1(int num)
        {
            this -> firstNum = num;
        }

        //friend function
        friend int getfirstnum(Class1 cls);

};

//Function definition for the friend function
int getfirstnum(Class1 cls)
{
    return (cls.firstNum + 5);
}



///Main program begins with a program execution
int main()
{
    //Clear screen
    system("cls");

    //Variables
    int passValue = 22, obtainedValue;
    Class1 c1 = Class1(passValue);
    //integer myNum = c1.firstNum;//firstNum not accesible since its private
    obtainedValue = getfirstnum(c1);
    cout<<"Value obtained back from the class is:  "<<obtainedValue<<endl;
    return 0;
}



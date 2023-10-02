//This is arthmetic constans of C++

#include <iostream>
#include <math.h>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Declare a local constant
   int firstNum = 8, secondNum = 25;
   long sum, product;
   int difference, quotient, remainder;

   //Perform the various arithmetic operations
   sum = secondNum + firstNum;
   product = secondNum * firstNum;
   difference = secondNum - firstNum;
   quotient = secondNum / firstNum;
   remainder = secondNum % firstNum;

   //Display the results
   cout<<"\n"<<secondNum<<" + "<<firstNum<<" = "<<sum<<endl;
   cout<<"\n"<<secondNum<<" x "<<firstNum<<" = "<<product<<endl;
   cout<<"\n"<<secondNum<<" - "<<firstNum<<" = "<<difference<<endl;
   cout<<"\n"<<secondNum<<" / "<<firstNum<<" = "<<quotient<<endl;
   cout<<"\n"<<secondNum<<" % "<<firstNum<<" = "<<remainder<<endl;

   //Postfix & prefix operations
   int postfix = secondNum++;
   int prefix = --firstNum;

   cout<<"\nAfter postfixing the second number we get "<<postfix;
   cout<<"\nAfter prefixing the first number we get "<<prefix;
   cout<<"\nValue of second number after postfixing is "<<secondNum<<endl;
   return 0;
}

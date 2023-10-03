//This is the comparision operators of C++

#include <iostream>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Declare a local constant
    int firstNum = 8, secondNum = 25, thridNum = firstNum;

    //Compare the above numbers and display the results
    cout<<"Number comparison between 8, 25 and 8\n";


    cout<<"\n"<<firstNum<<" > "<<secondNum<<" is "
        <<(firstNum > secondNum? "true" : "false")<<endl;

    cout<<"\n"<<firstNum<<" < "<<secondNum<<" is "
        <<(firstNum < secondNum? "true" : "false")<<endl;

    cout<<"\n"<<firstNum<<" >= "<<secondNum<<" is "
        << (firstNum >= secondNum? "true" : "false")<<endl;
}

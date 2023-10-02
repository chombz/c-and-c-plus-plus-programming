//This is program to demonstrate if....else decision to vote

#include <iostream>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Declare a local constant
    int userAge;
    string votingStatus;

    //Prompt the user for their age
    cout<<"Please enter your age and I\'ll tell you whether";
    cin>>userAge;
    if(userAge >= 18)
        votingStatus = "You can vote!";
    else
        votingStatus = "Sorry, You can\'t vote";

    //display the results
    cout<<"Your age is "<<userAge<<endl;
    cout<<votingStatus;
    return 0;



}

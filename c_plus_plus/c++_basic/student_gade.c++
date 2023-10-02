//This is program to assign a student a grade based 
//on their performance using   if....else if...else ladder decision 
//constructs

#include <iostream>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Declare a local constant
    int score;
    char grade;

    //prompt the user for the student's score
    cout<<"Please enter the student\'s score in the exam\n";
    cin>>score;

    //Assign the student a grade using the if..else if ..else
    if(score >= 70 && score <= 100)
        grade = 'A';

    else if(score >= 60 && score <= 69)
        grade = 'B';

    else if(score >= 50 && score <= 59)
        grade = 'C';

    else if(score >= 40 && score <= 49)
        grade = 'D';

    else if (score >= 0 && score <= 39)
        grade = 'E';

    else
    {
        cout<<"Sorry, an invalid score was entered!\nPlease enter values between 0 - 100.\n";
        exit(1);//terminate the application
    }

    //Display the results
    cout<<"\nScore "<<score<<"\nGrade: "<<grade<<endl;


}

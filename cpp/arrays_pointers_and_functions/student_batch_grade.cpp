/* A C++ program that accepts the following details from the user(Lecturer/teacher)
    a) Number of students in the class
    b) Names of the students
    c) Number of the subjects/modules the students are studying
    d) Names of the subjects or modules
    e) Each of the student's score in each module/subject

  The program should display the student's name, score obtained in each subject, total &
  mean score and grade & comment based on the criteria below:


    meanscore between
    i)  70 - 100 -> A
    ii) 60 - 69  -> B
    iii 50 - 59  -> C
    iv) 40 - 49  -> D
    v)  0 - 39   -> E


    comment:
    A -> "Excellent!"
    B -> "Very Good!"
    C -> "Good!"
    D -> "Fair!"
    E -> "Try Harder!"
  */


///Pre-processor Directives
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace :: std;

//function prototype
float getaverage(int, int);//Calculate mean score
float getgrade(float);//returns grade given their means score
string getcomment(char);//returns a comment based on the grade


///Main program begins with a program execution
int main()
{
    //clear the screen
    system("");

    //Variables
    unsigned short numOfStudents, numOfModules;
    int e, c;//looping variables
    int width =12;


    //prompt user of number of students
    cout<<"\nHow many student are in the class?\n";
    cin>>numOfStudents;

    //String array to hold names of students in class
    string stundNames[numOfStudents];

    //Read in the names of the students
    for(e = 0; e < numOfStudents; e++)
    {
        cout<<"\nPlease enter the name of student "<<e+1<<" ->\n \n";
        cin>>stundNames[e];
    }

    //Prompt the user fir the number of subjects
    cout<<"\nHow many subjects are the students taking?\n \n";
    cin>>numOfModules;

    //string array to hold the names of subjects
    string modulesNames[numOfModules];
    //Read in the names of the subjects
    for(e = 0; e< numOfModules; e++)
    {
        cout<<"\nPlease enter name of subject "<<e+1<<" ->\n \n";
        cin>>modulesNames[e];
    }

    //Declare arrays to hold the student's score details
    unsigned short studentScore[numOfStudents][numOfModules];
    int total[numOfStudents];//holds each student's total score
    float avgScore[numOfStudents];//holds each student's average score
    char studGrade[numOfStudents];//stores students grade
    string comment[numOfStudents];//stores student comment

    //Read in each student's score in each subject
    for(e=0; e < numOfStudents; e++)
    {
        //Initialised each student score to zero "0"
        total[e] = 0;
        for( c = 0; c < numOfModules; c++)
        {
            cout<<"Please enter "<<stundNames[e]<<"\'s score in "<<modulesNames[c]<<endl;
            cin>>studentScore[e][c];

            //Calculate each student's total score cumulatively
            total[e] = studentScore[e][c];
        }

        //Calculate each student's average score
        avgScore[e] = getaverage(total[e], numOfModules);

        //Get the student's grade
        studGrade[e] = getgrade(avgScore[e]);

        //Get a grade based on the student's grade
        comment[e] = getcomment(studGrade[e]);
    }

    //Display the results
    cout<<"Name";

    for(string module:modulesNames)
    {
        cout<<setw(10)<<module;
    }
    cout<<setw(width)<<"Total"<<setw(width)<<"Average"<<setw(width)<<"Grade"<<setw(width)<<"Comment";
    for(e = 0; e< numOfStudents; e++)
    {
        cout<<"\n"<<stundNames[e]<<"\n";
        for(c =0; c < numOfStudents; c++)
        {
            cout<<setw(width)<<studentScore[e][c];
        }
        cout<<setw(width)<<total[e]<<setw(width)<<avgScore[e]<<setw(width)<<studGrade[e]<<setw(width)<<comment[e]<<endl;
    }
    return 0;
}//end function main()


//Function definition
float getaverage(int totalScore, int numOfModules)
{
    float average = totalScore / numOfModules;
    return average;
}//End of function getaverage()


float getgrade(float meanScore)
{
    char grade;
    if(meanScore >= 70 && meanScore <= 100)  grade = 'A';


    else if(meanScore >= 60 && meanScore <= 69)  grade = 'B';


    else if(meanScore >= 50 && meanScore <= 59)  grade = 'C';


    else if(meanScore >= 40 && meanScore <= 49)  grade = 'D';


    else if (meanScore >= 0 && meanScore <= 39)  grade = 'E';

    return grade;
}//End functions

string getcomment(char grade)
{
    switch(grade)
    {
    case 'A' :
    return "Excellent!";

    case 'B' :
    return "Very Good!";

    case 'C' :
    return "Good!";

    case 'D' :
    return "Fair!";

    case 'E' :
    return "Try Hard!";

    default :
    return "invalid grade!";
    }
}//End function




//C++ program that demonstrates default arguments

///Pre-processor Directives
#include <iostream>
using namespace :: std;

//Class definition
class TotalScore
{
    private:
        unsigned short int score1;
        unsigned short int score2;
    public:
        //default constructor
        TotalScore()
        {
            score1 = 0;
            this->score2 = 0;
        }

        //Member method with default argument to calculate the student's
        //total score
        unsigned int addscores(unsigned short score1 = 50,
                               unsigned short score2 = 70)
        {
            this-> score1 = score1;
            this-> score2 = score2;

            //perform the addition and return the total score
            return(this -> score1 + this -> score2);
        }

        //Accessors & mutators -> used to prevent unauthorised/direct
        //access to member variables/ support encapsulation
        unsigned int getscore1()
    {
        return this->score1;
    }
    unsigned int getscore2(){return this->score2;}

    void setscore1(unsigned int score){ this->score1 = score;}
    void setscore2(unsigned int score){ this->score2 = score;}
};

    ///Main program begins with a program execution
    int main()
    {
        //Clear screen
        system("cls");

        //Declare two objects of type TotalScore
        TotalScore ts1, ts2;

        //Instantiate the objects
         ts1 = TotalScore();
         ts2 = TotalScore();

         //Variables to hold the totals for the two subjects
         unsigned int total1, total2;
         //Variables to get two scores from the user
         unsigned short int userScore1, userScore2;

         //Prompt the user for two scores
         cout<<"Please enter the student\'s first score ->"<<endl;
         cin>>userScore1;
         cout<<"Please enter the student\'s second score ->"<<endl;
         cin>>userScore2;

         //Get/calculate the totals for the two object(ts1 & ts2)
         total1 = ts1.addscores();
         total2 = ts2.addscores(userScore1,userScore2);

         //Display the results of student 1
         cout<<"Student 1 results\n..............."
             <<"\nSubject 1: "<<ts1.getscore1()
             <<"\nSubject 2: "<<ts1.getscore2()
             <<"\nTotal: "<<total1<<"\n......................"<<endl;

        //Display the results of Student 2
         cout<<"Student 2 results\n..............."
             <<"\nSubject 1: "<<ts2.getscore1()
             <<"\nSubject 2: "<<ts2.getscore2()
             <<"\nTotal: "<<total2<<"\n......................"<<endl;
        return 0;
    }



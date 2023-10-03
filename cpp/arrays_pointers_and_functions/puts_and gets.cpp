/* A C program to demonstrate the use 
of gets and puts functions to read in and display/output text */



#include <cstdio>
#include <cstdlib>



//main function
int main()
{
    //clear screen
    system("cls");

    //character array to hold customer feedback
    char feedback[150];

    //prompt the user for feedback
    puts("Please Tell Us about your Experience At our shop");
    gets(feedback);


    //display the feedback
    printf("\nThank you for your Feedback as displayed below: \n");
    puts(feedback);
}

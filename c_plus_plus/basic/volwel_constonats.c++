//This is program that accepts a letter of the alphabet form the
//user and informs them if it's not a letter by using the switch....case

#include <iostream>
using namespace :: std;

//main function begins with a program execution
int main()
{
    //Variable declaration
    char letter;

    //prompt the user for a lower case letter
    cout<<"Please enter a lowercase letter and I will tell you if it is a vowel";
    cin>>letter;

    //convert the user's input to lowercase and use the switch...case construct
    //to determine whether the letter is a vowel or construct
    switch(tolower(letter))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"The letter "<<letter<<" is a vowel.\n";
        break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        cout<<"The letter "<<letter<<" is a consonant.\n";
        break;
        default:
        cout<<"Sorry, you entered "<<letter<<" which is not a vowel or consonant.\n"
        <<"Please restart the program and enter a letter.\n";
    }


}

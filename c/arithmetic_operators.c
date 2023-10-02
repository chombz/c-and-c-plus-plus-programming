/* A C program that accepts two numbers from the user
 adds, substracts, multiply and divide them and
 display the resulton the csonsole. */

//add include
#include <stdio.h>
 
//main function begins program execution
int main()
{
    //Declare variables to be used in the program
    int firstNum, secondNum;
    int sum;
    int min;
    int multi;
    int sub;

    //Prompt the user for the first number
    printf("Please enter the first number to be used in the calculation:\n");
    //read in the first number from the user
    scanf("%d",&firstNum);

    //Prompt the user for the second number
    printf("Please enter the second number to be used in the calculation:\n");
    //read in the second number from the user
    scanf("%d",&secondNum);

    //Add the two numbers and store the result
    sum = firstNum + secondNum;
    min = firstNum - secondNum;
    multi = firstNum * secondNum;
    sub = firstNum / secondNum;

    //Display the sum
    printf("%d + %d = %d\n",firstNum, secondNum, sum);

    //Display the min
    printf("%d - %d = %d\n",firstNum, secondNum, min);

    //Display the multi
    printf("%d * %d = %d\n",firstNum, secondNum, multi);

    //Display the sub
    printf("%d / %d = %d\n",firstNum, secondNum, sub);
    return 0;
}

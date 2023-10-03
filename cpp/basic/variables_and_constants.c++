//This C++ program to display variables and constants

#include <iostream>
#include <math.h>
using namespace :: std;


//define global constants
#define VAT_RATE .16
#define MARGIN 0.32

//main function begins with a program execution
int main()
{
    //Declare a local constant
    const float PI = 3.141592;

    //local variable declaration
    int radius = 7, purchasePrice = 100;
    float area = PI * pow(radius,2);
    float circum = PI * (radius * 2);

    float sellingPrice = (purchasePrice * VAT_RATE) + (purchasePrice * MARGIN) + purchasePrice;


    //Display the results
    cout<<"\nDimensions of the circle";
    cout<<"\n---------------------------"
        <<"\nRadius: "<<radius
        <<"\nArea: "<<area
        <<"\nCircumference : "<< circum
        <<"\n---------------------------";

    cout<<"\nProduct Details";
    cout<<"\n---------------------------";
    cout<<"\nPurchase price: "<<purchasePrice;
    cout<<"\nVAT amount: "<<purchasePrice * VAT_RATE;
    cout<<"\nMark-up/Margin amount: "<<purchasePrice*MARGIN;
    cout<<"\nSelling price: "<<sellingPrice;
    cout<<"\n---------------------------------";
    return 0;
}

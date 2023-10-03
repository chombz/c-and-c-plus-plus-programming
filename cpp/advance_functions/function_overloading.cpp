//C++ program that demonstrates function overloading

///C++ program that demonstrates function overloading

// Pre-processor Directives
#include <iostream>
using namespace std;

// Define a class that overloads methods
class AddNums {
public:
    // 1. Method to add two integers and display their sum
    void addition(int a, int b) {
        long sum = a + b;
        cout << a << " + " << b << " = " << sum << endl;
    }

    // 2. Method to add two floats and display their sum
    void addition(float a, float b) {
        double sum = a + b;
        cout << a << " + " << b << " = " << sum << endl;
    }

    // 3. Method to add an integer and two floats and display their sum
    void addition(int a, float b, float c) {
        double sum = a + b + c;
        cout << a << " + " << b << " + " << c << " = " << sum << endl;
    }
};

int main() {
    // Declare and initialize variables to be used in the program
    int num1 = 48, num2 = 8;
    float fl1 = 3.145, fl2 = 8.543134, fl3 = 1.234;

    // Declare and instantiate an AddNums object
    AddNums addNum;

    // Add two integers and display their sum
    addNum.addition(num1, num2);

    // Add two floats and display their sum
    addNum.addition(fl1, fl2);

    // Add an integer and two floats and display their sum
    addNum.addition(num1, fl2, fl3);

    return 0;
}




/* A C++ program to demonstrate Multiple catch blocks. */
#include <iostream>
using namespace std;

// Multiple CATCH blocks for one TRY block
void handler(int value)
{
    try {
            if (value)
                {
                    cout << " Integer throw to proceed";
                    throw value;
                }
                else
                {
                    cout << "String throw to proceed";
                    throw " Value passed to handler function is string";
                }
        }
        catch (char *strin) //Catch block for zero value
            {
                cout << " A string exception caught: ";
                cout << strin << "\n";
            }
            catch (int d) //Catch block for non-zero value
            {
                cout << " An integer exception caught\n";
                cout << " The value is ";
                cout << d << "\n";
            }
}

//main method begins program execution
int main()
    {
        cout << " Start of program execution in main";
        handler(1);
        handler(0);
        cout << "\n Program control back in main --- now it ends";
    return 0;
    }

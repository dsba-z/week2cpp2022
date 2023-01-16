////////////////////////////////////////////////////////////////////////////////
///
/// Problem 1. Not zero.
///
/// Program asks a user for a number to use in expression 100/x
/// User enters a number.
/// If the number is not 0, program outputs the result.
/// If the number if 0, program prints "Cannot use 0"
///
////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x != 0)
    {
        double y = (100 / x);
        cout << y << std::endl;
        
        cout << 100 / x << std::endl;
        cout << 100. / x << std::endl;


    }
    else
    {
        cout << "Don't use 0\n";
    }
    return 0;
}
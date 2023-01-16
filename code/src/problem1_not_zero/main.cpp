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

int main()
{
    int x;
    std::cout << "Please enter a number: " << std::endl;
    
    std::cin >> x;

    if (x == 0)
    {
        std::cout << "The number should not be 0" << std::endl;
    }
    else
    {
        std::cout << 100 / x << std::endl;
        std::cout << 100. / x << std::endl;
    }

    return 0;
}

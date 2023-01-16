////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Print ASCII table".
/// \author     Sergey Shershakov, Georgii Zhulikov
/// \version    0.2.0
/// \date       16.01.2023
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Print the "printable part" of the ASCII table using tabs for aligning.
/// 
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;

int main()
{
    // TODO: input your code here

    for (int j = 0; j < 16; ++j)
    {
        cout << "\t" << std::hex << j;
    }
    cout << std::endl;

    for (int i = 2; i < 8; ++i)
    {
        for (int j = 0; j < 16; ++j)
        {
            cout << "\t" << char(90);
            // ord(s)
            // chr(n)
        }
        cout << std::endl;
    } 
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 2: "Multiplication Table".
/// \author     Sergey Shershakov, Georgii Zhulikov
/// \version    0.2.0
/// \date       16.01.2023
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
/// Example:
/// 	1	2	3
/// 1	1	2	3
/// 2	2	4	6
/// 3	3	6	9
/// Note how in the first line tab automatically aligns positions.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using std::cin;
using std::cout;


int main()
{

    int n;
    int m;

    cout << "Enter two numbers: ";

    cin >> m; // s.split()
    cin >> n;

    for (int j = 1; j <= n; ++j)
    {
        cout << "\t" << j;
    }
    cout << std::endl;
    
    for (int i = 1; i <= m; ++i)
    {

        cout << i;
        for (int j = 1; j <= n; ++j)
        {
            int product = i * j;
            cout << "\t" << product;
        }
        cout << std::endl;
    }
    // TODO: input your code here
    return 0;
}

#include <iostream>
#include "header_files/math_lib.h"
using namespace std;
namespace math_lib
{
    int Sum2Numbers(int a, int b)
    {
        return a + b;
    }

    int Swap2Numbers(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
        return 0; // Return value is not used, but can be modified as needed
    }

    int Multiply2Numbers(int a, int b)
    {
        return a * b;
    }

    int Divide2Numbers(int a, int b)
    {
        if (b == 0)
        {
            cerr << "Error: Division by zero!" << endl;
            return 0; // Handle division by zero
        }
        return a / b;
    }

    int Subtract2Numbers(int a, int b)
    {
        return a - b;
    }
}
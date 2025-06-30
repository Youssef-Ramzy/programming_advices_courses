#include <iostream>
#include "mylib.h"
using namespace std;

namespace mylib
{
    int ReadNumber()
    {
    int Num;

    cout << "Please enter a Number" << endl;
    cin >> Num;

    return Num;
    }

    int SumOfFour(int a, int b, int c, int d)
    {
        return (a + b + c + d);
    }
}
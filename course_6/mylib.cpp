#include "mylib.h"
#include <iostream>
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
}
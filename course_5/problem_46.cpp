#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem:46
 * Write a program to print abs of numbers , don't use built in abs
 * function
 * Input:
 * -10
 * Output:
 * My abs Result : 10
 * C++ abs Result: 10
*/

int ReadNumber(string Message)
{
    int Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

int AbsFunction(int Number)
{
    if (Number > 0)
        return Number;
    return Number * -1;
}

int main(void)
{
    int Number = ReadNumber("Enter Number");

    cout << "My abs Result : " << AbsFunction(Number) << endl;
    cout << "C++ abs Result : " << abs(Number) << endl;

    return 0;
}
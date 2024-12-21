#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem:47
 * Write a program to print rounds of numbers, don’t use built-in round function
 * Input: 10.7
 * My Round Result: 11
 * C++ Round Result: 11
 * Input: 10.3
 * My Round Result: 10
 * C++ Round Result: 10
 * Input: -10.7
 * My Round Result: -11
 * C++ Round Result: -11
*/

float ReadNumber(string Message)
{
    float Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

int RoundFunction(float Number)
{
    int Round = Number;

    if (Number < 0)
    {
        if (Number <= Round - 0.5)
            return Round - 1;
        return Round;
    }
    else
        if (Number >= Round + 0.5)
            return Round + 1;
        return Round;
}

int main(void)
{
    float Number = ReadNumber("Enter Number");

    cout << "My Round Result : " << RoundFunction(Number) << endl;
    cout << "C++ Round Result : " << round(Number) << endl;

    return 0;
}
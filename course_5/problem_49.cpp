#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem:49
 * Write a program to print Ceil of numbers , don't use built-in Ceil
 * function
 * Input: 10.7
 * My MyCeiI Result: 11
 * Ceil Result: 11
 * Input: -10.7
 * My MyCeiI Result: -10
 * Ceil Result: -10
*/

float ReadNumber(string Message)
{
    float Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

int CeilFunction(float Number)
{
    int Ceil = Number;

    if (Number < 0)
        return Ceil;
    return Ceil + 1;
}

int main(void)
{
    float Number = ReadNumber("Enter Number");

    cout << "My Ceil Result : " << CeilFunction(Number) << endl;
    cout << "C++ Ceil Result : " << ceil(Number) << endl;

    return 0;
}
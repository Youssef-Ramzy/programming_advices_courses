#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem: 50
 * Write a program to print Sqrt of numbers, don't use built-in
 * sqrt function
 * Input: 25
 * My MySqrt Result: 5
 * C++ sqrt Result: 5
*/

float ReadNumber(string Message)
{
    float Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

float SqrtFunction(float Number)
{
    return pow(Number, 0.5);
}

int main(void)
{
    float Number = ReadNumber("Enter Number");

    cout << "My Sqrt Result : " << SqrtFunction(Number) << endl;
    cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}
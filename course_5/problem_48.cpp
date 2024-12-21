#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem:48
 * Write a program to print floor of numbers , don't use built-in
 * floor function
 * Input: 10.7
 * My MyFloor Result: 10
 * C++ floor Result: 10
 * Input: 10.3
 * My MyFloor Result: 10
 * C++ floor Result: 10
 * Input: -10.3
 * My MyFloor Result: -11
 * C++ floor Result: -11
*/

float ReadNumber(string Message)
{
    float Number;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

int FloorFunction(float Number)
{
    int Floor = Number;

    if (Number < 0)
        return Floor - 1;
    return Floor;
}

int main(void)
{
    float Number = ReadNumber("Enter Number");

    cout << "My floor Result : " << FloorFunction(Number) << endl;
    cout << "C++ floor Result : " << floor(Number) << endl;

    return 0;
}
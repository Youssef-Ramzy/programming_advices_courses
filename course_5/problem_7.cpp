#include <iostream>
using namespace std;

/**
 * Problem # 7/2
 * Write a program to read a number and print it reversed.
 * Input:
 * 1234
 * Output:
 * 4321
 */

// My solution

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintReversedNumber(int Number)
{
    while (Number > 0)
    {
        cout << Number % 10;
        Number /= 10;
    }
    cout << endl;
}

int main()
{
    PrintReversedNumber(ReadPositiveNumber("Please enter the numbers"));

    return 0;
}

#include <iostream>
using namespace std;

/**
 * Write a program to read a number and print an inverted letters pattern
 * as follows?
 * Input:
 * 3
 * Output:
 * CCC
 * BB
 * A
 * Input:
 * 5
 * Output
 * EEEEE
 * DDDD
 * CCC
 * BB
 * A
 */

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

void PrintNumber(int Number)
{
    int Letter = 64;

    for (int i = Number; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)(Letter + i);
        }
        cout << endl;
    }
}

int main()
{
    PrintNumber(ReadPositiveNumber("Please enter the Number"));

    return 0;
}
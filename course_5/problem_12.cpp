#include <iostream>
using namespace std;

/**
 * Write a program to read a number and print an inverted pattern
 * as follows?
 * Input:
 * 3
 * Output:
 * 333
 * 22
 * 1
 * Input:
 * 5
 * Output
 * 55555
 * 4444
 * 333
 * 22
 * 1
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
    for (int i = Number; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintNumber(ReadPositiveNumber("Please enter the Number"));

    return 0;
}
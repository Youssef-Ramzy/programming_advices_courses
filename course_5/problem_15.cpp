#include <iostream>
using namespace std;

/**
 * Write a program to read a number and print an inverted pattern
 * as follows?
 * Input:
 * 3
 * Output:
 * A
 * BB
 * CCC
 * Input:
 * 5
 * Output
 * A
 * BB
 * CCC
 * DDDD
 * EEEEE
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
    cout << endl;

    for (int i = 65; i < Number + 65; i++)
    {
        for (int j = 0; j <= i - 65; j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintNumber(ReadPositiveNumber("Please enter the Number"));

    return 0;
}
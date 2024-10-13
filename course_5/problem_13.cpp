#include <iostream>
using namespace std;

/**
 * Write a program to read a number and print an inverted pattern
 * as follows?
 * Input:
 * 3
 * Output:
 * 1
 * 22
 * 333
 * Input:
 * 5
 * Output
 * 1
 * 22
 * 333
 * 4444
 * 55555
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
    for (int i = 1; i <= Number; i++)
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
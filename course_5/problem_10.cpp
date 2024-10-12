#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program to read a number and print it in order from left to right.
 * Input:
 * 1234
 * Output:
 * 1
 * 2
 * 3
 * 4
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

int CountNumber(int Number)
{
    int Count = 0;

    while (Number > 0)
    {
        Count++;
        Number /= 10;
    }

    return Count;
}

void PrintDigits(int Number)
{
    int Count = CountNumber(Number), Divisor = 1;

    for (int i = 0; i < Count; i++)
    {
        Divisor *= 10;
    }

    while (Divisor > 0)
    {
        cout << (Number / Divisor) % 10 << "\n";
        Divisor /= 10;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Please enter the Numbers"));

    return 0;
}

// PRO solution


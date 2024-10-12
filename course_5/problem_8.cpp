#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program that read a digit and a number, then print the digit frequency in that number
 * Input:
 * 12232222
 * Output:
 * Digit 2 Frequency is 5 Time(s)
 */

// My solution

int ReadePositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while(Number <= 0);

    return Number;
}

int NumberFrequency(int Numbers, int Num)
{
    int Count = 0;

    while(Numbers > 0)
    {
        if (Num == Numbers % 10)
            Count++;
        Numbers /= 10;
    }

    return Count;
}

void CheckStatus(int Number)
{
    int Status = 0, Numbers = Number;

    while (Number > 0)
    {
        Status = NumberFrequency(Numbers, Number % 10);
        if (Status > 0)
            cout << "Digit " << Number % 10 << " Frequency is " << Status - 1 << " Time(s)" << endl;
            break;
        Number /= 10;
    }
}

int main()
{
    CheckStatus(ReadePositiveNumber("Please enter the Numbers"));

    return 0;
}
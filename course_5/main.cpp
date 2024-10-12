#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program read a number, and then print all digit frequencies in that number
 * Input
 * 1223222
 * Output:
 * Digit 1 Frequency is 1 Time(s).
 * Digit 2 Frequency is 5 Time(s).
 * Digit 3 Frequency is 1 Time(S).
 */

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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FrqCount = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (DigitToCheck == Remainder)
            FrqCount++;
    }

    return FrqCount;
}

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;

        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number:");
    PrintAllDigitsFrequency(Number);

    return 0;
}
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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FrqCount = 0;
    while (Number > 0)
    {
        if (Number % 10 == DigitToCheck)
            FrqCount++;
        Number /= 10;
    }
    return FrqCount;
}

void PrintDigitFrequencies(int Number)
{
    for (short Digit = 0; Digit <= 9; Digit++)
    {
        int Frequency = CountDigitFrequency(Digit, Number);
        if (Frequency > 0)
        {
            cout << "Digit " << Digit << " Frequency is " << Frequency << " Time(s)." << endl;
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number:");
    PrintDigitFrequencies(Number);
    return 0;
}

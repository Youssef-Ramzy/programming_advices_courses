#include <iostream>
using namespace std;

// Problem 3:
/**
 * Write a rpgram to check if the number is Perfect or not?
 * Note: Perfect Number = Sum (all divisor)
 * 28 = 1 + 2 + 4 + 7 14
 * 6 = 1 + 2 + 3
 * Input:
 * 28
 * 12
 * Output:
 * 28 is Perfect.
 * 12 is't Perfect.
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

bool CheckIfPerfect(int Number)
{
    int Perfect = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Perfect += i;
    }
    if (Number == Perfect)
        return true;
    else
        return false;
}

void IsPerfect(int Number)
{
    if (CheckIfPerfect(Number))
        cout << Number << " Is Perfect" << endl;
    else
        cout << Number << " Is't Perfect" << endl;
}

int main()
{
    IsPerfect(ReadPositiveNumber("Please enter the Num?"));
}

 // PRO solution

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

bool isPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }

    return Number == Sum;
}

void PrintResults(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";
    else
        cout << Number << " Is Not Perfect Number.\n";
}

int main()
{
    PrintResults(ReadPositiveNumber("Please enter a Positive Number?"));
    return 0;
}
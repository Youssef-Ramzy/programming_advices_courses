#include <iostream>
using namespace std;

/**
 * Problem 11/2.
 * Write a program to read a number and check if it is Palindrome?
 * Palindrome is a number that reads the same from right to left.
 * Input:
 * 1234
 * 12321
 * Output :
 * No , it is NOT a Palindrome number.
 * Yes it is a Palindrome number.
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

bool IsPalindrome(int Number)
{
    int OriginalNumber = Number;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        ReversedNumber = ReversedNumber * 10 + Number % 10;
        Number /= 10;
    }

    return OriginalNumber == ReversedNumber;
}

void PrintResult(bool Check)
{
    if (Check)
        cout << "Yes it is a Palindrome number." << endl;
    else
        cout << "No , it is NOT a Palindrome number." << endl;
}

int main()
{
    PrintResult(IsPalindrome(ReadPositiveNumber("Please enter the number")));

    return 0;
}
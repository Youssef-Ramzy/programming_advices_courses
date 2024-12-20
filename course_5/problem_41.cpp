#include <iostream>
using namespace std;

/**
 * Problem: 41
 * Write a program to fill array with numbers, then check if it is Palindrome
 * array or not, Note: Palindrome array can be read the same from right to
 * left and from left to right.
 * Input
 * 10 20 30 30 20 10
 * Array Elements:
 * 10 20 30 30 20 10
 * Yes array is Palindrome
*/

void FillArray(int Array[100], int& ArrayLength)
{
    Array[0] = 10;
    Array[1] = 20;
    Array[2] = 30;
    Array[3] = 30;
    Array[4] = 20;
    Array[5] = 10;
    ArrayLength = 6;
}

void PrintArray(int Array[100], int ArrayLength)
{
    cout << "Array Element:" << endl;
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << ' ';
    }
    cout << endl;
}

bool IsPalindrome(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength / 2; i++)
    {
        if (Array[i] != Array[ArrayLength - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int Array[100], ArrayLength;

    FillArray(Array, ArrayLength);
    PrintArray(Array, ArrayLength);

    if (IsPalindrome(Array, ArrayLength))
        cout << "It is Palindrom" << endl;
    else
        cout << "It isn't Palindrom" << endl;

    return 0;
}
#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100.
 * Input:
 * 10
 * Output:
 * Array Elements: 56 55 83 71 32 52 17 28 71 52
 */

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while(Number <= 0);

    return Number;
}

int GenerateRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void WriteArray(int Array[], int Lenght)
{
    for (int i = 0; i < Lenght; i++)
    {
        Array[i] = GenerateRandomNumber(0, 100);
    }
}

void PrintArray(int Array[], int Length)
{
    cout << "Array Elements: ";
    for (int i = 0; i < Length; i++)
    {
        if (i < Length -1)
            cout << Array[i] << ' ';
        else
            cout << Array[i] << endl;
    }
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length");
    int Array[Length] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length);

    return 0;
}
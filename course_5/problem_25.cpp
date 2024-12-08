#include <iostream>
using namespace std;

/**
 * Problem: 25
 * Write a program to fill array with max size 100 with random
 * numbers from I to 100, then print Minimum Number
 * Input:
 * 10
 * Array Elements: 30 99 72 47 95 67 29 13 80 64
 * Min Number is : 13
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

void CopyArray(int Array[], int Length)
{
    int Mine = 100;

    for (int i = 0; i < Length; i++)
    {
        if (Mine >= Array[i])
            Mine = Array[i];
    }

    cout << "Max Number is: " << Mine << endl;
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length");
    int Array[Length] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length);
    CopyArray(Array, Length);

    return 0;
}
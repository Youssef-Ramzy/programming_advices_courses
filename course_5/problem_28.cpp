#include <iostream>
using namespace std;

/**
 * Problem: 28
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, copy it to another array and print it.
 * Input: 10
 * Output;
 * Array 1 elements:
 * 1 47 51 18 85 62 51 61 82 4
 * Array 2 elements after copy:
 * 1 47 51 18 85 62 51 61 82 4
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

void WriteArray(int Array[100], int Lenght)
{
    for (int i = 0; i < Lenght; i++)
    {
        Array[i] = GenerateRandomNumber(0, 100);
    }
}

void PrintArray(int Array[100], int Length, string Messages)
{
    cout << Messages << endl;
    for (int i = 0; i < Length; i++)
    {
        if (i < Length -1)
            cout << Array[i] << ' ';
        else
            cout << Array[i] << endl;
    }
}

void CopyArray(int Array[100], int Length)
{
    int Array2[Length] = {0};

    for (int i = 0; i < Length; i++)
    {
        Array2[i] = Array[i];
    }

    PrintArray(Array2, Length, "Aarray 2 elements after copy: ");
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length");
    int Array[Length] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length, "Array 1 element: ");
    CopyArray(Array, Length);

    return 0;
}
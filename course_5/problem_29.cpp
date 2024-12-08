#include <iostream>
using namespace std;

/**
 * Problem: 29
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, copy only prime numbers to another
 * array and print it.
 * Input :
 * 10
 * Output:
 * Array 1 elements:
 * 42 68 35 1 70 25 79 59 65
 * Prime Numbers in Array2:
 * 1 79
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

bool IsPrime(int Number)
{
    if (Number <= 1)
        return false;
    for (int i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0)
            return false;
    }
    return true;
}

void CopyArray(int Array[100], int Length)
{
    int PrimeArray[100] = {0};
    int PrimeIndex = 0;
    for (int i = 0; i < Length; i++)
    {
        if (IsPrime(Array[i]))
        {
            PrimeArray[PrimeIndex] = Array[i];
            PrimeIndex++;
        }
    }
    PrintArray(PrimeArray, PrimeIndex, "Prime Numbers in Array2:");
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
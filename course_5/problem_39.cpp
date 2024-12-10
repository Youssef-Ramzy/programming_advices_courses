#include <iostream>
#include <cmath>
using namespace std;

/**
 * Problem: 39
 * Write a program to fill array with max size 100 with random numbers from
 * 1 to 100, copy only prime numbers to another array using AddArrayElement,
 * and print it.
 * Input:
 * 10
 * 
 * Output:
 * Array I elements:
 * 61100 32 75 81 95 50 98 13 70
 * Array 2 Prime numbers:
 * 61 13
*/

int ReadPositiveNumber(string Message)
{
    int Number =  0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <=0);
    
    return Number;
}

int CreateRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void WriteArray(int Array[100], int &ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = CreateRandomNumber(1, 100);
    }
}

bool IsPrime(int Number)
{
    if (Number <= 1)
        return false;

    int M = sqrt(Number);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return false;
    }
    return true;
}

void AddPrimeArrayElement(int Number, int Array[100], int &ArrayLength)
{
    if (IsPrime(Number))
    {
        ArrayLength++;
        Array[ArrayLength - 1] = Number;
    }
}

void CopyPrimeArrayUsingAddArrayElement(int ArraySource[100], int ArrayDestine[100], int ArrayLength, int &ArrayDstineLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        AddPrimeArrayElement(ArraySource[i], ArrayDestine, ArrayDstineLength);
    }
}

void PrintArray(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(0));

    int Array[100], arrayLength = ReadPositiveNumber("Enter the array length"), Array2Length = 0;

    WriteArray(Array, arrayLength);
    int Array2[100];

    CopyPrimeArrayUsingAddArrayElement(Array, Array2, arrayLength, Array2Length);

    cout << "Array1 elements" << endl;
    PrintArray(Array, arrayLength);
    cout << "Array2 Prime elements" << endl;
    PrintArray(Array2, Array2Length);

    return 0;
}
#include <iostream>
using namespace std;

/**
 * Problem: 37
 * Write a program to fill array with max size 100 with random numbers from
 * 1 to 100, copy it to another array using AddArrayElement, and print it.
 * Input
 * 10
 * Array 1 elements:
 * 1 47 51 18 85 62 51 61 82 4
 * Array 2 elements after copy:
 * 1 47 51 18 85 62 51 61 82 4
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

void AddArrayElement(int Number, int Array[100], int &ArrayLength)
{
    ArrayLength++;
    Array[ArrayLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int ArraySource[100], int ArrayDestine[100], int ArrayLength, int &ArrayDstineLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        AddArrayElement(ArraySource[i], ArrayDestine, ArrayDstineLength);
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

    CopyArrayUsingAddArrayElement(Array, Array2, arrayLength, Array2Length);

    cout << "Array1 elements" << endl;
    PrintArray(Array, arrayLength);
    cout << "Array2 elements" << endl;
    PrintArray(Array2, Array2Length);

    return 0;
}
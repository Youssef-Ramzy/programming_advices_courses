#include <iostream>
using namespace std;

/**
 * Problem: 38
 * Write a program to fill array with max Size 100 with random numbers from
 * 1 to 100, copy only odd numbers to another array using AddArrayElement,
 * and print it.
 * Input:
 * 10
 * 
 * Output:
 * Array 1 elements:
 * 59 14 84 36 6 51 48 91 96 67
 * Array 2 Odd numbers:
 * 59 51 91 67
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

void AddOddArrayElement(int Number, int Array[100], int &ArrayLength)
{
    if (Number % 2)
    {
        ArrayLength++;
        Array[ArrayLength - 1] = Number;
    }
}

void CopyOddArrayUsingAddArrayElement(int ArraySource[100], int ArrayDestine[100], int ArrayLength, int &ArrayDstineLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        AddOddArrayElement(ArraySource[i], ArrayDestine, ArrayDstineLength);
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

    CopyOddArrayUsingAddArrayElement(Array, Array2, arrayLength, Array2Length);

    cout << "Array1 elements" << endl;
    PrintArray(Array, arrayLength);
    cout << "Array2 Odd elements" << endl;
    PrintArray(Array2, Array2Length);

    return 0;
}
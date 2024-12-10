#include <iostream>
using namespace std;

/**
 * Problem: 40
 * Write a program to fill array with numbers, then print distinct
 * numbers to another array.
 * Array 1 elements:
 * 10 10 10 50 50 70 70 70 70 90
 * Array 2 distinct elements:
 * 10 50 70 90
 */

short FindNumberPositionInArray(int Number, int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int Array[100], int ArrayLength)
{
    return FindNumberPositionInArray(Number, Array, ArrayLength) != -1;
}
void AddDistincArrayElement(int Number, int Array[100], int &ArrayLength)
{
    ArrayLength++;
    Array[ArrayLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int ArraySource[100], int
ArrayDestine[100], int SourceLength, int& DestineLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if(!IsNumberInArray(ArraySource[i], ArrayDestine, DestineLength))
        {
            AddDistincArrayElement(ArraySource[i], ArrayDestine, DestineLength);
        }
    };
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

    int Array[100] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90}, arrayLength = 10;

    int Array2[100], Array2Length = 0;

    CopyDistinctNumbersToArray(Array, Array2, arrayLength, Array2Length);

    cout << "Array1 elements" << endl;
    PrintArray(Array, arrayLength);
    cout << "Array2 Distinc elements" << endl;
    PrintArray(Array2, Array2Length);

    return 0;
}
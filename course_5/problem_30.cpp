#include <iostream>
using namespace std;

/**
 * Problem: 30
 * Write a program to fill array two arrays with max size 100 with random
 * numbers from 1 to 100, sum their elements in a third array and print the
 * results.
 * 10
 * Array elements:
 * 42 68 35 1 70 25 79 59 63 65
 * Array 2 elements:
 * 6 46 82 28 62 92 96 43 28 37
 * Sum of array l and array2 elements:
 * 48 114 117 29 132 117 175 102 91 102
 */

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

int GenerateRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void WriteArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array[i] = GenerateRandomNumber(1, 100);
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

void SumArray(int Array3[100], int Array1[100], int Array2[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array3[i] = Array1[i] + Array2[i];
    }
}

int main()
{
    srand(time(0));

    int Length = ReadPositiveNumber("Enter the array length");
    int Array1[Length] = {0};
    int Array2[Length] = {0};
    int Array3[Length] = {0};

    WriteArray(Array1, Length);
    WriteArray(Array2, Length);
    SumArray(Array3, Array1, Array2, Length);
    PrintArray(Array1, Length, "Array 1 element: ");
    PrintArray(Array2, Length, "Array 2 element: ");
    PrintArray(Array3, Length, "Sum of Array1 and Array2 elements: ");

    return 0;
}
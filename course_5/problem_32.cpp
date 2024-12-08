#include <iostream>
using namespace std;

/**
 * Problem: 32
 * Write a program to fill array with max size 100 with random numbers from
 * 1 to 100, copy it to another array in reverse order and print it.
 * Input
 * 10
 * Output:
 * Array 1 elements:
 * 64 8 62 19 2 21 15 74 96 85
 * Array 2 elements after copying array 1 in reversed order:
 * 85 96 74 15 21 2 19 62 8 64
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

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void WriteArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int Array[100], int Length, string Message)
{
    cout << Message << endl;

    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void ReverArray(int ReversedArray[100], int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        ReversedArray[i] = Array[Length - 1 - i];
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length: ");
    int Array[100] = {0};
    int ReversedArray[100] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length, "Array 1");
    ReverArray(ReversedArray, Array, Length);
    PrintArray(ReversedArray, Length, "Array 2");

    return 0;
}
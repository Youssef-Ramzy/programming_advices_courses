#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * Problem: 31
 * Write a program to fill array with ordered numbers from 1 to N,
 * then print it, after that shuffle this array and print it after shuffle.
 * Input:
 * 10
 * Output:
 * Array elements before shuffle:
 * 12345678910
 * Array elements after shuffle:
 * 24631017859
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

void WriteArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array[i] = i + 1;
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

void Swap(int &A, int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int Array[100], int ShuffeldArray[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        ShuffeldArray[i] = Array[i]; 
    }

    for (int i = Length - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        Swap(ShuffeldArray[i], ShuffeldArray[j]);
    }
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length: ");
    int Array[100] = {0};
    int ShuffeldArray[100] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length, "Array elements before shuffle");
    ShuffleArray(Array, ShuffeldArray, Length);
    PrintArray(ShuffeldArray, Length, "Array elemets after shuffle");

    return 0;
}
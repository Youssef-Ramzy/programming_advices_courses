#include <iostream>
using namespace std;

/**
 * Problem: 27
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, then print average of all number
 * Input:
 * 10
 * Output :
 * Array Elements: 24 36 44 8 56 98 67 33 71
 * Average of all number is : 51
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

void AvgNumber(int Array[], int Length)
{
    float Avg = 0;

    for (int i = 0; i < Length; i++)
    {
        Avg += Array[i];
    }

    Avg = Avg / Length;
    cout << "Average Number is: " << Avg << endl;
}

int main()
{
    int Length = ReadPositiveNumber("Enter the array length");
    int Array[Length] = {0};

    WriteArray(Array, Length);
    PrintArray(Array, Length);
    AvgNumber(Array, Length);

    return 0;
}
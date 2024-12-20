#include <iostream>
using namespace std;

/**
 * Problem: 42
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, then print the count of Odd numbers.
 * 10 Input
 * Array Elements: 60 78 15 49 56 6 4 3 21 23 Output
 * Odd Numbers count is: 5
*/

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message <<endl;
        cin >> Number;
    } while(Number <= 0);

    return Number;
}

int RandomNumberFrom1To100(void)
{
    return rand() % (100 - 1 + 1) + 1;
}

void FillArrayWithRandomNumber(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = RandomNumberFrom1To100();
    }
}

void PrintArray(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << ' ';
    }
    cout << endl;
}

int CountOddNumbersInArray(int Array[100], int ArrayLength)
{
    int CountOddNumber = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if ((Array[i] % 2) != 0)
            CountOddNumber++;
    }
    return CountOddNumber;
}

void PrintOddNumberCount(int Array[100], int ArrayLength)
{
    cout << "Odd Number in Array is: ";
    cout << CountOddNumbersInArray(Array, ArrayLength) << endl;
}

int main(void)
{
    srand(time(0));
    int ArrayLength = ReadPositiveNumber("Enter the Array Length");
    int Array[100] = {0};

    FillArrayWithRandomNumber(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    PrintOddNumberCount(Array, ArrayLength);

    return 0;
}
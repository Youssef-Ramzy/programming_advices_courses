#include <iostream>
using namespace std;

/**
 * Problem: 44
 * Write a program to fill array with max size 100 with random
 * numbers from -100 to 100, then print the count of Positive
 * numbers.
 * 10
 * Array Elements: 17 -9 -9 -90 -72 -100 -4 60 -84 -15
 * Positive Numbers count is: 2
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

int RandomNumberFrom_100To100(void)
{
    return rand() % (100 - (-100) + 1) + (-100);
}

void FillArrayWithRandomNumber(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = RandomNumberFrom_100To100();
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

int CountPositiveNumbersInArray(int Array[100], int ArrayLength)
{
    int CountPositiveNumber = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] > 0)
            CountPositiveNumber++;
    }
    return CountPositiveNumber;
}

void PrintPositiveNumberCount(int Array[100], int ArrayLength)
{
    cout << "Positive Number in Array is: ";
    cout << CountPositiveNumbersInArray(Array, ArrayLength) << endl;
}

int main(void)
{
    srand(time(0));
    int ArrayLength = ReadPositiveNumber("Enter the Array Length");
    int Array[100] = {0};

    FillArrayWithRandomNumber(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    PrintPositiveNumberCount(Array, ArrayLength);

    return 0;
}
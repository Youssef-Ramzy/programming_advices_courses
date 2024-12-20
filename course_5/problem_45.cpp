#include <iostream>
using namespace std;

/**
 * Problem: 45
 * Write a program to fill array with max size 100 with random
 * numbers from -100 to 100, then print the count of Negative
 * numbers.
 * 10
 * Array Elements: 17 -9 -9 -90 -72 -100 -4 60 -84 -15
 * Negative Numbers count is: 8
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

int CountNegativeNumbersInArray(int Array[100], int ArrayLength)
{
    int CountNegativeNumber = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] < 0)
            CountNegativeNumber++;
    }
    return CountNegativeNumber;
}

void PrintNegativeNumberCount(int Array[100], int ArrayLength)
{
    cout << "Negative Number in Array is: ";
    cout << CountNegativeNumbersInArray(Array, ArrayLength) << endl;
}

int main(void)
{
    srand(time(0));
    int ArrayLength = ReadPositiveNumber("Enter the Array Length");
    int Array[100] = {0};

    FillArrayWithRandomNumber(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    PrintNegativeNumberCount(Array, ArrayLength);

    return 0;
}
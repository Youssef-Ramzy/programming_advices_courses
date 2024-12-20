#include <iostream>
using namespace std;

/**
 * Problem: 43
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, then print the count of Even numbers.
 * Input:
 * 10
 * Array Elernents: 14 92 70 15 58 76 84 62 10 43 Output:
 * Even Numbers cunt is: 8
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

int CountEvenNumbersInArray(int Array[100], int ArrayLength)
{
    int CountEvenNumber = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if ((Array[i] % 2) == 0)
            CountEvenNumber++;
    }
    return CountEvenNumber;
}

void PrintEvenNumberCount(int Array[100], int ArrayLength)
{
    cout << "Even Number in Array is: ";
    cout << CountEvenNumbersInArray(Array, ArrayLength) << endl;
}

int main(void)
{
    srand(time(0));
    int ArrayLength = ReadPositiveNumber("Enter the Array Length");
    int Array[100] = {0};

    FillArrayWithRandomNumber(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    PrintEvenNumberCount(Array, ArrayLength);

    return 0;
}
#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to fill array with max size 100 with random numbers from
 * 1 to 100, read number and return its index in array if found otherwise
 * return -1.
 * 
 * Input 1:
 * 10
 * Output 1:
 * Array 1 elements:
 * 80 79 12 80 81 29 3 37 25 91
 * Please enter a number to search for?
 * 12
 * Number you are looking for is: 12
 * The number found at position: 2
 * The number found its order 3
 * 
 * Input 2:
 * 10
 * Output 2:
 * Array 1 elements:
 * 80 79 12 80 81 29 3 37 25 91
 * Please enter a number to search for?
 * 55
 * Number you are looking for is: 55
 * The number is not found :-(
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

int CreateRandomNumberFrom1To100(void)
{
    return rand() % (100 - 1 + 1) + 1;
}

void WriteAnArrayOfRandomNumber(int Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = CreateRandomNumberFrom1To100();
    }
}

void PrintArray(int Array[100], int ArrayLength, string Message)
{
    cout << Message << endl;

    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void SearchForNumber(int Array[100], int ArrayLength, int SearchNumber)
{
    int Check = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] == SearchNumber)
        {
            cout << "Number you are looking for is: " << Array[i] << endl;
            cout << "The number found at position: " << i << endl;
            cout << "The number found its order " << i + 1 << endl;
            Check++;
        }
    }
    if (!Check)
    {
        cout << "Number you are looking for is: " << SearchNumber << endl;
        cout << "The number is not found :-(" << endl;
    }
}

int main()
{
    srand(time(0));
    int Array[100] = {0};
    int ArrayLength = ReadPositiveNumber("Enter the array length");

    WriteAnArrayOfRandomNumber(Array, ArrayLength);
    PrintArray(Array, ArrayLength, "Array 1 elements");

    int SearchNumber = ReadPositiveNumber("Please enter a number to search for?");
    SearchForNumber(Array, ArrayLength, SearchNumber);

    return 0;
}
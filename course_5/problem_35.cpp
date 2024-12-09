#include <iostream>
using namespace std;

/**
 * Problem: 35
 * Write a program to fill array with max size 100 with random numbers from
 * 1 to 100, read number and print if it's found or not (reuse code in prev
 * problem).
 * 
 * Input 1:
 * 10
 * Output 1:
 * Array 1 elements;
 * 83 92 66 21 62 96 40 13 19 30
 * Please enter a number to search for?
 * 66
 * Number you are looking for is: 66
 * Yes. The number is found :-)
 * 
 * Input 2:
 * 10
 * Output 2:
 * Array 1 elements:
 * 83 92 66 21 62 96 40 13 19 30
 * Please enter a number to search for?
 * 19
 * Number you are looking for is: 19
 * NO, The number is not found
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

bool SearchForNumber(int Array[100], int ArrayLength, int SearchNumber)
{
    int Check = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] == SearchNumber)
        {
            return 1;
        }
    }
    return 0;
}

void PrintSearchResult(int Array[100], int ArrayLength, int SearchNumber)
{
    cout << "Number you are looking for is: " << SearchNumber << endl;

    if (SearchForNumber(Array, ArrayLength, SearchNumber))
    {
        cout << "Yes. The number is found :-)" << endl;
    }
    else
    {
        cout << "NO, The number is not found" << endl;
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
    PrintSearchResult(Array, ArrayLength, SearchNumber);

    return 0;
}
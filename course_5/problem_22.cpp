#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to read N elements and store them in array then print all array elements
 * and ask for a number to check, then print how many number a certain element repeated in
 * that array.
 * Input: 5
 * Enter array elements:
 * Element [1] : 1
 * Element [2] : 1
 * Element [3] : 1
 * Element [4] : 2
 * Element [5] : 3
 * Enter the number you want to check: 1
 * Output:
 * Original array: 1 1 2 3
 * 1 iS repeated 3 time(s)
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

void WriteArrayElement(int Array[], int Length)
{
    for (int i = 1; i <= Length; i++)
    {
        cout << "Element ["<< i <<"] : " << endl;
        cin >> Array[i-1]; 
    }
}

int CheckRepeatedNumber(int Array[], int Length, int Number)
{
    int Repeated = 0;

    for (int i = 0; i < Length; i++)
    {
        if (Array[i] == Number)
        {
            Repeated++;
        }
    }

    return Repeated;
}

void CheckNumber(int Array[], int Length)
{
    int Number = ReadPositiveNumber("Enter the number you want to check");

    cout << "Original array: ";
    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << ' ';
    }
    cout << endl << Number << " is repeated " << CheckRepeatedNumber(Array, Length, Number) << " time(s)" << endl;
}

int main()
{
    int ArrayLength = ReadPositiveNumber("Please enter the array length");
    int Array[ArrayLength] = {0};

    WriteArrayElement(Array, ArrayLength);
    CheckNumber(Array, ArrayLength);

    return 0;
}
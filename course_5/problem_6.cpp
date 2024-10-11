#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program to read a number and print the sum of its digits
 * Input:
 * 1234
 * Output:
 * Sum Of Digits: 10
 */

// My solution

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

void PrintNumbersSum(int Number)
{
    int Sum = 0;

    while (Number > 0)
    {
        Sum += Number % 10;
        Number /= 10;
    }

    cout << "Sum Of Digits: " << Sum << endl;
}

int main()
{
    PrintNumbersSum(ReadPositiveNumber("Please enter the numbers"));

    return 0;
}

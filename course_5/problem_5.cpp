#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program to read a number and print it in a reversed order.
Input:
1234
Output:
4
3
2
1
 */

// My solution

int ReadInput(string Message)
{
    int num;

    cout << Message;
    cin >>num;

    return num;
}

void NumDivider(int Num)
{
    do
    {
        cout << Num % 10 << endl;
        Num = Num / 10;
    } while (Num > 0);
}

int main()
{
    int Num = ReadInput("Enter the numbers: ");

    NumDivider(Num);

    return 0;
}

// PRO solution

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Pease enter a positive number?"));

    return 0;
}

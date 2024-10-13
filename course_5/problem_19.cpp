#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to print 3 random numbers from 1 to 10.
 * Output:
 * 9
 * 5
 * 3
 */
int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        Cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int RandomNumberGenerator(int From, int To)
{
    retuen (random(From, to));
}

void PrintNumberAmount(int Amount, int From, int To)
{
    for (int i = 0; i < Amount; i++)
    {
        cout << RandomNumberGenerator(From, To) << endl;
    }
}

int main()
{
    int Amount = ReadPositiveNumber("Please enter the amount of random Numbers");
    int From = 1, To = 9;

    PrintNumberAmount(Amount, From, To);

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read a number and check if it is a prime number or not.
Note: Prime number can only divide on one and on itself.
Input
5
6
3
Outputs
Prime
Not Prime
Prime
 */

// My solution

int getInput(void)
{
    int Num;

    cout << "Enter the number: ";
    cin >> Num;

    return Num;
}

bool Process(int Num)
{
    if (Num < 2)
        return false;

    for (int i = 2; i <= sqrt(Num); i++)
    {
        if (Num % i == 0)
            return false;
    }

    return true;
}

void printOutPut(bool Result)
{
    if (Result)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

int main()
{
    int Num;

    Num = getInput();
    printOutPut(Process(Num));

    return 0;
}

// PRO solution

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    float Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void printNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
        case enPrimNotPrime::Prime:
            cout << "The number is prime\n";
            break;
        case enPrimNotPrime::NotPrime:
            cout << "The number is not Prime\n";
            break;
    }
}

int main()
{
    printNumberType(ReadPositiveNumber("Please enter a positive Number?"));
    return 0;
}

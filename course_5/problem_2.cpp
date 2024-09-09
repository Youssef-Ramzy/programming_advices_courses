#include <iostream>
using namespace std;

// Problem 2:
/**
 * Write a program to print all prime numbers from 1 to N.

 Input:
 10

 Output:
 1
 2
 3
 5
 7

 */

 // My solution

int GetInput(string Message)
{
    int N;
    cout << Message << endl;
    cin >> N;
    return N;
}

bool CheckPrimeNumber(int N)
{
    if (N <= 1)
        return false;
    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

void PrintPrimeNumbers(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (CheckPrimeNumber(i))
            cout << i << endl;
    }
}

int main()
{
    int Number = GetInput("Please enter the Max number?");
    PrintPrimeNumbers(Number);
    return 0;
}

 // PRO solution

#include <iostream>
#include <string>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

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

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}

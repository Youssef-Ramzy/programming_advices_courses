#include <iostream>
using namespace std;

/**
 * Problem # 4/2
 * Write a program to print all perfect numbers from 1 to N
 * Input: 
 * 500
 * Output:
 * 6
 * 28
 * 496
 */

// Function to read a positive number from the user
int ReadPositiveNumber(const string& Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// Function to check if a number is perfect
bool CheckIfPerfect(int Number)
{
    int PerfectSum = 0;

    for (int i = 1; i <= Number / 2; i++)  // Loop up to Number / 2
    {
        if (Number % i == 0)
            PerfectSum += i;
    }
    
    return Number == PerfectSum;
}

// Function to print all perfect numbers from 1 to N
void PrintPerfectNumbers(int N)
{
    cout << "Perfect numbers from 1 to " << N << " are:" << endl;
    for (int num = 1; num <= N; num++)
    {
        if (CheckIfPerfect(num))
        {
            cout << num << endl;
        }
    }
}

int main()
{
    int N = ReadPositiveNumber("Please enter the upper limit (N):");
    PrintPerfectNumbers(N);
    return 0;
}

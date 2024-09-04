#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read a LoanAmount and ask you how many months you need to settle the loan,
then calculate the monthly installment amount.
Input
5000
10
Outputs
500
 */

// My solution

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int LoanCalc(int LoanAmount, int Months)
{
    return LoanAmount / Months;
}

int main(void)
{
    int LoanAmount = ReadPositiveNumber("Enter the Loan Amount?");
    int Months = ReadPositiveNumber("Enter the Months?");

    cout << LoanCalc(LoanAmount, Months) << endl;

    return 0;
}

// PRO solution

// Sam as mine
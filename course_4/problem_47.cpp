#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read a LoanAmount and Monthly
Payment and calculate how many months you need to settle the loan.
Input
5000
500
Outputs
10 Months
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

int LoanCalc(int LoanAmount, int LoanPayment)
{
    return LoanAmount / LoanPayment;
}

int main(void)
{
    int LoanAmount = ReadPositiveNumber("Enter the Loan Amount?");
    int LoanPayment = ReadPositiveNumber("Enter the Loan Payment?");

    cout << LoanCalc(LoanAmount, LoanPayment) << " Months" << endl;

    return 0;
}

// PRO solution

// same as mine
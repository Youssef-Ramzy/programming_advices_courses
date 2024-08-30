#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
Input
20
50
Outputs
30
 */

// My solution

void getInput(int* TotalBill, int* CashPaid)
{
    cout << "Enter the TotoalBill: ";
    cin >> *TotalBill;
    cout << "Enter the CashPaid: ";
    cin >> *CashPaid;
}

int CalcCash(int TotalBill, int CashPaid)
{
    return CashPaid - TotalBill;
}

void printResult(int CashBack)
{
    cout << "Your Cash is: " << CashBack << endl;
}

int main()
{
    int TotalBill, CashPaid, CashBack;

    getInput(&TotalBill, &CashPaid);
    printResult(CalcCash(TotalBill, CashPaid));

    return 0;
}

// PRO solution

float ReadPositiveNumber(string Message)
{
    float Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number >= 0);

    return Number;
}

flaot CalculateRemainder(flaot TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill?");
    float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid?");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " TotalCashPaid << endl;

    cout << "****************\n";
    cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

    return 0;
}

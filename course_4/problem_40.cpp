#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee
and sales tax to it, and print the TotalBill on the screen.
Input
100
Outputs
127.6
 */

// My solution

float getBill()
{
    float Bill;

    cout << "Enter the BillValue: ";
    cin >> Bill;

    return Bill;
}

float CalcServicesFee(float Bill)
{
    return (Bill * 10.0 / 100);
}

float CalcSalesTax(float Bill)
{
    return (Bill * 16.0 / 100);
}

void printResult(float Bill, float Fee, float Tax)
{
    float Result = Bill + Fee + Tax;
    cout << "Total Bill: " << Result << endl;
}

int main()
{
    float Bill = getBill();
    float Fee = CalcServicesFee(Bill);
    float Tax = CalcSalesTax(Bill);
    printResult(Bill, Fee, Tax);

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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill?");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}

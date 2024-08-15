#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• TotalSales
The commission is calculated as one percentage
* the total sales amount, all you need is to decide which percentage to use of the following:
• > 1,000,000  Percentage is 1%
• > 500K to 1M  Percentage is 2%
• > 100K – 500K  Percentage is 3%
• > 50K to 100K  Percentage is 5%
• Otherwise  Percentage is 0%
Example Inputs:
110,000
Outputs
3,300
 */

// My solution

float getTotalSales()
{
    float TotalSales;

    cout << "Please enter the totalSales?" << endl;
    cin >> TotalSales;

    return TotalSales;
}

int getCommissionPercent(float TotalSales)
{
    if (TotalSales > 1000000)
        return 1;
    else if (TotalSales > 500000 && TotalSales <= 1000000)
        return 2;
    else if (TotalSales > 100000 && TotalSales <= 500000)
        return 3;
    else if (TotalSales > 50000 && TotalSales <= 100000)
        return 5;
    else
        return 0;
}

void printCommission(float TotalSales, int Percentage)
{
    float commission = (TotalSales * (float)Percentage) / 100.0;

    cout << "Your Commission on (" << TotalSales << ") is: " << commission << endl;
}

int main()
{
    float TotalSales = getTotalSales();

    printCommission(TotalSales, getCommissionPercent(TotalSales));

    return 0;
}

// PRO solution
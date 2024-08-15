#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• Pennies, Nickels, Dimes, Quarters, Dollars
Then calculate the total pennies , total dollars and print them on screen
giving that:
• Penny = 1
• Nickel = 5
• Dime = 10
• Quarter = 25
• Dollar = 100
Example Inputs:
5,5,5,5,5
Outputs
705 Pennies
7.05 Dollars
 */

// My solution

void getInputs(int* Pennies, int* Nickels, int* Dimes, int* Quarters, int* Dollars)
{
    cout << "Enter pennies: ";
    cin >> *Pennies;
    cout << "Enter Nickels: ";
    cin >> *Nickels;
    cout << "Enter Dimes: ";
    cin >> *Dimes;
    cout << "Enter Quarters: ";
    cin >> *Quarters;
    cout << "Enter Dollars: ";
    cin >> *Dollars;
}

int PenniesCalc(int Pennies, int Nickels, int Dimes, int Quarters, int Dollars)
{
    int PenniesCalc = Pennies + (Nickels*5) + (Dimes*10) + (Quarters*25) + (Dollars*100);

    return PenniesCalc;
}

float DollarsCalc(int PenniesCalc)
{
    return (float)PenniesCalc / 100.0;
}

void printResult(float PenniesCalc, float DollarsCalc)
{
    cout << PenniesCalc << " Pennies" << endl;
    cout << DollarsCalc << " Dollars" << endl;
}

int main()
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
    int penniesCalc;
    float dollarsCalc;

    getInputs(&Pennies, &Nickels, &Dimes, &Quarters, &Dollars);

    penniesCalc = PenniesCalc(Pennies, Nickels, Dimes, Quarters, Dollars);
    dollarsCalc = DollarsCalc(penniesCalc);

    printResult(penniesCalc, dollarsCalc);

    return 0;
}

// PRO solution
#include <iostream>
using namespace std;

// Problem 1:
/**
Write a program to print the multiplication table from 1 to 10 as follows
 */

 // My solution

// I don't know!

 // PRO solution

void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
    cout << "\t";

    for (int i = 1; i <= 10; i++)
        cout << i << "\t";
    cout << "\n___________________________________________________________________________________\n";
}

string ColumSperator(int i)
{
    if (i < 10)
        return "    |";
    else
        return "   |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++)
            cout << i * j << "\t";
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
}

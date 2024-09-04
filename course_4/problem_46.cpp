#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to print all letters from A to Z
Outputs
A
B
C
.
.
.Z
 */

// My solution

void PrintChars(void)
{
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << endl;
    }
}

int main()
{
    PrintChars();
}

// PRO solution

// sam as mine
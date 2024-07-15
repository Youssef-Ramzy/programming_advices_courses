#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate circle area through diameter, then print it on the screen.
The use should enter:
D
Example Inputs:
10
Outputs 
78.54
 */

// My solution

float ReadNumber(void)
{
	float D;

	cout << "Please enter D value: ";
	cin >> D;

	return D;
}

float CircleArea(float D)
{
	return ((M_PI * (D * D)) / 4);
}

void PrintResult(float Result)
{
	cout << "The Circle Area is: " << Result << endl;
}

int main(void)
{
	PrintResult(CircleArea(ReadNumber()));

	return 0;
}

// PRO solution

// Same as mine.

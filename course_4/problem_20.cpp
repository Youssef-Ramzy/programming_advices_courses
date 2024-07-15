#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate Circle area inscribed in a square, then print it on the screen.
The user should enter:
A
Example Inputs:
10
Outputs 
78.54
 */

// My solution

float ReadNumber(void)
{
	float A;

	cout << "Please enter A value: ";
	cin >> A;

	return A;
}

float CircleArea(float A)
{
	return ((M_PI * (A * A)) / 4);
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

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate circle area circle described around an arbitrary triangle,
then print it on the screen.
The use should enter:
a
b
C
Example Inputs:
5
6
7
Outputs 
40.088
 */

// My solution

void ReadNumbers(float& A, float& B, float& C)
{
	cout << "Please enter A value: ";
	cin >> A;
	cout << "Please enter B value: ";
	cin >> B;
	cout << "Please enter C value: ";
	cin >> C;
}

float CircleArea(float A, float B, float C)
{
	float P = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	T *= T;

	return (M_PI * T);
}

void PrintResult(float Result)
{
	cout << "The circle area is: " << Result << endl;
}

int main(void)
{
	float A, B, C;

	ReadNumbers(A, B, C);
	PrintResult(CircleArea(A, B, C));

	return 0;
}

// PRO solution

// Same as mine.

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen.
The use should enter:
a
b
Example Inputs:
20
10
Outputs 
47.124
 */

// My solution

void ReadNumbers(float& A, float& B)
{
	cout << "Please enter A value: ";
	cin >> A;
	cout << "Please enter B value: ";
	cin >> B;
}

float CircleArea(float A, float B)
{
	return (M_PI * (B * B / 4) * ((2 * A - B) / (2 * A + B)));
}

void PrintResult(float Result)
{
	cout << "The circle are is: " << Result << endl;
}

int main(void)
{
	float A, B;

	ReadNumbers(A, B);
	PrintResult(CircleArea(A, B));

	return 0;
}

// PRO solution

// Same as mine.

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate circle area then print it on the screen.
The use should enter:
r
Example Inputs:
5
Outputs 
78.54
 */

// My solution

void ReadNumber(float& R)
{
	cout << "Please enter R: ";
	cin >> R;
}

float CircleArea(float R)
{
	return (M_PI * (R * R));
}

void PrintResult(float Result)
{
	cout << "The circle Area is: " << Result << endl;
}

int main(void)
{
	float R;

	ReadNumber(R);
	PrintResult(CircleArea(R));

	return 0;
}

// PRO solution

// sam as mine execpt the ReadNumber He make it with a return type float.

#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to calculate triangle area then print it on the screen.
The user should enter:
a
h
Example Inputs:
10
8
Outputs 
40
 */

// My solution

void ReadNumbers(float& A, float& H)
{
	cout << "Please enter A: ";
	cin >> A;
	cout << "Please enter H: ";
	cin >> H;
}

float TriangleArea(float A, float H)
{
	return ((A / 2) * H);
}

void PrintTriangleArea(float Result)
{
	cout << "\nThe Triangle are is: " << Result << endl;
}

int main(void)
{
	float A, H;

	ReadNumbers(A, H);
	PrintTriangleArea(TriangleArea(A, H));

	return 0;
}

// PRO solution

// Same as mine.

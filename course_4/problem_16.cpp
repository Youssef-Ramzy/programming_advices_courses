#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate rectangle area through diagonal and side area of
rectangle and print it on the screen.
The use should enter:
a
d
Example Inputs:
5
40
Outputs
198.431
 */

// My solution

void ReadInfo(int& A, int& D)
{
	cout << "Please enter the diagonal?" << endl;
	cin >> A;
	cout << "Please enter the side area?" << endl;
	cin >> D;
}

float CalculateResult(int A, int D)
{
	return (A * sqrt(D * D - A * A));
}

void PrintResult(float Result)
{
	cout << "The Rectangle Area is: " << Result << endl;
}

int main(void)
{
	int A, D;

	ReadInfo(A, D);
	PrintResult(CalculateResult(A, D));

	return 0;
}

// PRO solution

// Sam as mine execpt the datatype of A && B > float.

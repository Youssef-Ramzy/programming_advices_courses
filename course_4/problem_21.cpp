#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate circle area along the circumference, then print it on the screen.
The use should enter:
L
Example Inputs:
20
Outputs 
31.831
 */

// My solution

float ReadNumber(void)
{
	float L;

	cout << "Please enter L: ";
	cin >> L;

	return L;
}

float CircleAreaByLenght(float L)
{
	return ((L * L) / (M_PI * 4));
}

void PrintResult(float Result)
{
	cout << "The Circle are is: " << Result << endl;
}

int main(void)
{
	PrintResult(CircleAreaByLenght(ReadNumber()));

	return 0;
}

// PRO solution

// Same as mine.

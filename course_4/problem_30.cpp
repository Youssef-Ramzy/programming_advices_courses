#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to calculate factorial of N!
Example: factorial of 6  6 x 5 x 4 x 3 x 2 x 1 = 720
Note: User should only enter positive number, other wise reject it and ask to enter again
Input
6
Outputs
720
 */

// My solution

void ReadNumber(int& Number)
{
	cout << "Please enter N: ";
	cin >> Number;
}

void CheckIfNumberPositive(int& Number)
{
	do
	{
		ReadNumber(Number);
	} while (Number < 0);
}

void PrintNumber(int Number, int Factorial)
{
	cout << "The Factorial of " << Number << " is " << Factorial << endl;
}

int FactorialOfNumber(int Number)
{
	int Factorial = 1;

	for (int i = Number; i > 0; i--)
	{
		Factorial *= i;
	}

	return Factorial;
}

int main(void)
{
	int Number, Factorial;

	CheckIfNumberPositive(Number);
	PrintNumber(Number, FactorialOfNumber(Number));
}

// PRO solution

// ...

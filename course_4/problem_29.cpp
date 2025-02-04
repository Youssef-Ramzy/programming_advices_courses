#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to Sum even numbers from 1 to N.
Input
10
Outputs
30
 */

// My solution

int ReadNumber(void)
{
	int N;

	cout << "Please enter N: ";
	cin >> N;

	return N;
}

void PrintNumber(int N)
{
	cout << N << endl;
}

int EvenNumberLoop(int N)
{
	int Sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if ((i % 2) == 0)
			Sum += i;
	}

	return Sum;
}

int main(void)
{
	int N;

	N = ReadNumber();
	PrintNumber(EvenNumberLoop(N));
}

// PRO solution

// ...

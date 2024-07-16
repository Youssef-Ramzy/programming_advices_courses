#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to print numbers from N to 1.
Input
10
Outputs
10
9
8
7
6
5
4
3
2
1
 */

// My solution

int ReadNumber(void)
{
	int N;

	cout << "Please enter the N: ";
	cin >> N;

	return N;
}

void PrintNumber(int N)
{
	cout << N << endl;
}

void NLoop(int N)
{
	for (int i = N; i >= 1; i--)
	{
		PrintNumber(i);
	}
}

int main(void)
{
	int N;

	N = ReadNumber();
	NLoop(N);
}

// PRO solution

// ...

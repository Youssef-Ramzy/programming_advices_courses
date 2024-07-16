#include <iostream>
#include <math.h>
using namespace std;

/**
 * Problem:
Write a program to print numbers from 1 to N.
Input
10
Outputs
1
2
3
4
5
6
7
8
9
10
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
	for (int i = 1; i <= N; i++)
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

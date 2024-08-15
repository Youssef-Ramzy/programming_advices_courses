#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter: • Number
• M
Then Print the Number^M
Example Inputs:
2
4
Outputs
16
 */

// My solution

int getNum()
{
	int Number;

	cout << "Please enter the number?" << endl;
	cin >> Number;

	return Number;
}

int getUpM(int Number, int M)
{
	int Result = 1;

	for (int i = 0; i < M; i++)
	{
		Result *= Number;
	}

	return Result;
}

void printResult(int Number)
{
	cout << Number << endl;
}
int main()
{
	int Number = getNum();
	int M = getNum();

	cout << "--------\n";
	printResult(getUpM(Number, M));
}

// PRO solution

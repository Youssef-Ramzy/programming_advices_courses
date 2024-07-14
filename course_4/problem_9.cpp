#include <iostream>
using namespace std;

/**
 * Problem #9
Write a program to ask the user to enter:
• Number1, Number2, Number3
Then Print the Sum of entered numbers
Example Inputs:
10
20
30
Outputs
60
 */

// My solution

void ReadNumbers(int Numbers[3])
{
	cout << "Please enter Three Numbers blewo" << endl;
	for (int i = 0; i < 3; i++)
		cin >> Numbers[i];
}

int GetNumbersSum(int Numbers[3])
{
	int Sum = 0;

	for (int i = 0; i < 3; i++)
		Sum += Numbers[i];

	return Sum;
}

void PrintNumbers(int Sum)
{
	cout << Sum << endl;
}

int main(void)
{
	int Numbers[3];

	ReadNumbers(Numbers);
	PrintNumbers(GetNumbersSum(Numbers));

	return 0;
}

// PRO solution

void ReadMarks(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter Three Number1?" << endl;
	cin >> Num1;

	cout << "Please enter Three Number2?" << endl;
	cin >> Num2;

	cout << "Please enter Three Number3?" << endl;
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return (Num1 + Num2 + Num3);
}

void PrintResult(int Total)
{
	cout << Total << endl;
}

int main(void)
{
	int Num1, Num2, Num3;

	ReadMarks(Num1, Num2, Num3);
	PrintNumbers(SumOf3Numbers(Num1, Num2, Num3));

	return 0;
}

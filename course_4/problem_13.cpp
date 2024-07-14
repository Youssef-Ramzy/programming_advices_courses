#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter
3 numbers:
• A
• B
• C
Then Print Max number.
Example Inputs:
30
10
20
Outputs
30
 */

// My solution

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter number1?" << endl;
	cin >> Num1;

	cout << "Please enter number2?" << endl;
	cin >> Num2;

	cout << "Please enter number3?" << endl;
	cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2 && Num1 > Num3)
		return Num1;
	else if (Num2 > Num1 && Num2 > Num3)
		return Num2;
	else
		return Num3;
}

void PrintResult(int Max)
{
	cout << "The max number is: " << Max << endl;
}

int main(void)
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintResult(MaxOf3Numbers(Num1, Num2, Num3));

	return (0);
}

// PRO solution the diffrent is in the MaxOf3Numbers only

int MaxOf3Numbers(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2)
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;
	else
		if (Num2 > Num3)
			return Num2;
		else
			return Num3;
}

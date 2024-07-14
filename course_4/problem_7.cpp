#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter:
• Number
Then Print the “Half of the <Number> is <???>”.
Example Inputs:
60
50
Outputs
Half of 60 is 30
Half of 50 is 25
 */

float GetNum(void)
{
	float Num;

	cout << "Please enter Number?" << endl;
	cin >> Num;

	return Num;
}

float CalcHalfNum(float Num)
{
	float HalfNum = Num / 2;

	return HalfNum;
}

void PrintHalfNum(float Num, float HalfNum)
{
	cout << "Half of " << Num << " is " << HalfNum << endl;
}

int main()
{
	float Num = GetNum();

	PrintHalfNum(Num, CalcHalfNum(Num));

	return 0;
}

// PRO solution

int ReadNumber(void)
{
	int Num;

	cout << "Please enter Number?" << endl;
	cin >> Num;

	return Num;
}

float CalcHalfNum(int Num)
{
	return (float) Num / 2;
}

void PrintResult(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalcHalfNum(Num));

	cout << endl << Result << endl;
}

int main()
{
	PrintResult(ReadNumber());
	return 0;
}

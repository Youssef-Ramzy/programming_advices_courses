#include <iostream>
using namespace std;

/**
 * Problem #11
Write a program to ask the user to enter:
• Mark1, Mark2, Mark3
Then Print the Average of entered Marks,
and print “PASS” if average>=50,
otherwise print “FAIL”Example Inputs:
90
80
70
Outputs
80
PASS
 */

// My solution

enum enMarksStatus {Pass=1, Fial=2};

void ReadMarks(int Marks[3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter Mark" << (i + 1) << " ?" << endl;
		cin >> Marks[i];
	}
}

int CalcMarksSum(int Marks[3])
{
	int Sum = 0;

	for (int i = 0; i < 3; i++)
	{
		Sum += Marks[i];
	}

	return (Sum);
}

float CalcMarksAvg(int Marks[3])
{
	return (float)CalcMarksSum(Marks) / 3;
}

enMarksStatus CheckResult(float Average)
{
	if (Average >= 50)
		return Pass;
	else
		return Fial;
}

string Status(enMarksStatus Result)
{
	if (Result == Pass)
		return ("Pass");
	else
		return ("Fail");
}
void PrintResult(string Status)
{
	cout << "\nYou are " << Status << endl;
}

int main(void)
{
	int Marks[3];

	ReadMarks(Marks);
	PrintResult(Status(CheckResult(CalcMarksAvg(Marks))));

	return (0);
}

// PRO solution

enum enPassFail {Pass=1, Fail=2};

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter Mark1?" << endl;
	cin >> Mark1;

	cout << "Please enter Mark2?" << endl;
	cin >> Mark2;

	cout << "Please enter Mark3?" << endl;
	cin >> Mark3;
}

int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
	return (Mark1 + Mark2 + Mark3);
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return Pass;
	else
		return Fail;
}

void PrintResult(float Average)
{
	cout << "Your Average is: " << Average << endl;

	if (CheckAverage(Average) == Pass)
		cout << "You are Passed" << endl;
	else
		cout << "You are Failed" << endl;
}

int main(void)
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

	return 0;
}

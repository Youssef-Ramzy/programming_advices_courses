#include <iostream>
using namespace std;

/**
 * Problem #10
Write a program to ask the user to enter:
• Mark1, Mark2, Mark3
Then Print the Average of entered Marks
Example Inputs:
90
80
70
Outputs
80
 */

// My solution

void ReadMarks(int Marks[3])
{
	cout << "Please enter Three Marks blewo" << endl;
	for (int i = 0; i < 3; i++)
		cin >> Marks[i];
}

int CalcAvgOfMarks(int Marks[3])
{
	int Sum = 0;

	for (int i = 0; i < 3; i++)
		Sum += Marks[i];

	return Sum / 3;
}

void PrintMarks(int Marks)
{
	cout << "The Avrage is: " << Marks << endl;
}

int main(void)
{
	int Marks[3];

	ReadMarks(Marks);
	PrintMarks(CalcAvgOfMarks(Marks));

	return 0;
}

// PRO solution

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

void PrintResult(float Average)
{
	cout << "The Average is: " << Average << endl;
}

int main(void)
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

	return 0;
}

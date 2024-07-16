#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age”
 */

// My solution

int ReadAge(void)
{
	int Age;

	cout << "Please enter your Age: ";
	cin >> Age;

	return Age;
}

bool CheckAge(int Age)
{
	if (Age >= 18 && Age <= 45)
		return true;
	else
		return false;
}

void PrintResult(bool Result)
{
	if (Result)
		cout << "Valid Age" << endl;
	else
		cout << "Invalid Age" << endl;
}

int main(void)
{
	PrintResult(CheckAge(ReadAge()));

	return 0;
}

// PRO solution

// Same as mine execpt

int ReadAge(void)
{
	int Age;

	cout << "Please enter your Age: ";
	cin >> Age;

	return Age;
}

bool ValidAgeNumberInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

void PrintResult(int Age)
{
	if (ValidAgeNumberInRange(Age, 18, 45))
		cout << "Valid Age" << endl;
	else
		cout << "Invalid Age" << endl;
}

int main(void)
{
	PrintResult(ReadAge());

	return 0;
}

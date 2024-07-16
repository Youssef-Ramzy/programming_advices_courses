#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age”
and re-ask user to enter a valid age.
Note: You should keep asking user to enter a valid age until s/he enters it.
 */

// My solution

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

bool PrintResult(int Age)
{
	bool Result = ValidAgeNumberInRange(Age, 18, 45);

	if (Result)
		cout << "Valid Age" << endl;
	else
		cout << "Invalid Age" << endl;

	return Result;
}

void CheckValidAge()
{
	while (!PrintResult(ReadAge()))
		PrintResult(ReadAge());
}
int main(void)
{
	CheckValidAge();

	return 0;
}


// PRO solution

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

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do
	{
		Age = ReadAge();
	} while (!ValidAgeNumberInRange(Age, From, To));

	return Age;
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
	PrintResult(ReadUntilAgeBetween(18, 45));

	return 0;
}

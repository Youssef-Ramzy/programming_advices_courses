#include <iostream>
using namespace std;

/**
 * Problem #8
Write a program to ask the user to enter:
• Mark
Then Print the “PASS” if mark >=50,
otherwise print “Fail”
Example Inputs:
45
Outputs
Fail
 */

// My solution

int GetMark(void)
{
	int Mark;
	cout << "Please enter your mark?" << endl;
	cin >> Mark;

	return Mark;
}

bool CheckStatus(int Mark)
{
	if (Mark >= 50)
		return true;
	else
		return false;
}

void PrintStatus(bool Status)
{
	if (Status)
		cout << "PASS" << endl;
	else
		cout << "Fail" << endl;
}

int main()
{
	PrintStatus(CheckStatus(GetMark()));

	return 0;
}

// PRO solution

enum enPassFail {Pass=1, Fail=2};

int ReadMark(void)
{
	int Mark;
	cout << "Please enter your mark?" << endl;
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return Pass;
	else
		return Fail;
}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == Pass)
		cout << "You Passed" << endl;
	else
		cout << "You Failed" << endl;
}

int main()
{
	PrintResults(ReadMark());

	return 0;
}

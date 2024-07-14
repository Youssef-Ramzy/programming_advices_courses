#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter:
• First Name
• Last Name
Then Print Full Name on screen.
Example Input:
Mohammed
Abu Hadhoud
Output:
Mohammed Abu-Hadhoud
 */

// My solution
struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo GetFullName(stInfo Info)
{
	cout << "Please enter your first name?" << endl;;
	cin >> Info.FirstName;

	cout << "Please enter your last name?" << endl;;
	cin >> Info.LastName;

	return Info;
}

void PrintFUllName(stInfo Info)
{
	cout << Info.FirstName << " " << Info.LastName << endl;
}

int main()
{
	stInfo Info;
	PrintFUllName(GetFullName(Info));
}

// PRO solution

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo(void)
{
	stInfo Info;

	cout << "Please enter your first name?" << endl;;
	cin >> Info.FirstName;

	cout << "Please enter your last name?" << endl;;
	cin >> Info.LastName;
}

string GetFullName(stInfo Info, bool Reversed) // If the name in the USA
{
	string FullName = "";
	if (Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFUllName(string FullName)
{
	cout << FullName << endl;
}

int main()
{
	PrintFUllName(GetFullName(ReadInfo(), true));

	return 0;
}

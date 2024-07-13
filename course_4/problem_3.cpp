#include <iostream>
using namespace std;

// Prloblem #3
// Write a program to ask the user to enter a number, then 
// Print “ODD” if its odd, Or “Even” if its even.

// My solution
int get_num(int num)
{
	cout << "Please enter the number: ";
	cin >> num;

	return (num);
}

void check_num(int num)
{
	if ((num % 2) == 0)
		cout << "The number: " << num << " is Even" << endl;
	else
		cout << "The number: " << num << " is ODD" << endl;
}

int main(void)
{
	int num;

	check_num(get_num(num));
}

// The PRO solution

enum enNumberType {Odd = 1, Even= 2};

int ReadNumber(void)
{
	int num;
	cout << "Please enter the number?" << endl;
	cin >> num;

	return (num);
}

enNumberType CheckNumberType(int num)
{
	int Result = num % 2;

	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == Even)
		cout << "\n Number is Even. \n";
	else
		cout << "\n Number is Odd. \n";
	
}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}

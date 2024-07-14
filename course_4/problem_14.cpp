#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to ask the user to enter:
• Number1
• Number2
Then print the two numbers ,
then Swap the two numbers and print them
Example Inputs:
10
20
Outputs
10
20
20
10
 */

// My solution

void Read2Numbers(int& Num1, int& Num2)
{
	cout << "Please enter Number1?" << endl;
	cin >> Num1;
	cout << "Please enter Number2?" << endl;
	cin >> Num2;
}

void Swap2Numbers(int& Num1, int& Num2)
{
	int temp;

	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void PrintResult(int Num1, int Num2)
{
	cout << "*****************" << endl;
	cout << "Number 1 is: " << Num1 << endl;
	cout << "Number 2 is: " << Num2 << endl;
	cout << "*****************" << endl;
}

int main(void)
{
	int Num1, Num2;

	Read2Numbers(Num1, Num2);
	PrintResult(Num1, Num2);
	Swap2Numbers(Num1, Num2);
	PrintResult(Num1, Num2);

	return 0;
}

// PRO solution same as mine

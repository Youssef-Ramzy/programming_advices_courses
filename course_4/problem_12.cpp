#include <iostream>
using namespace std;

/**
 * Problem #12
Write a program to ask the user to enter:
• Number1 , Number2
Then Print the Max Number
Example Inputs:
10
20
Outputs
20
 */

// My solution

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter number1?" << endl;
	cin >> Num1;
	cout << "Please enter number2?" << endl;
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else 
		return Num2;
}

void PrintResult(int Max)
{
	cout << "The max number is: " << Max << endl;
}

int main(void)
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintResult(MaxOf2Numbers(Num1, Num2));

	return (0);
}

// PRO solution Same as mine

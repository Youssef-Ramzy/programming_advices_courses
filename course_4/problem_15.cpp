#include <iostream>
using namespace std;

/**
 * Problem:
Write a program to calculate rectangle
area and print it on the screen.
area = a * b.
Example Inputs:
10
20
Outputs
200
 */

// My solution

void Read2Numbers(float& Num1, float& Num2)
{
	cout << "Please enter Number1?" << endl;
	cin >> Num1;
	cout << "Please enter Number2?" << endl;
	cin >> Num2;
}

float calculateRectangleArea(float Num1, float Num2)
{
	return Num1 * Num2;
}

void PrintResult(float Result)
{
	cout << "*****************" << endl;
	cout << "The Reactangle Are is: " << Result << endl;
	cout << "*****************" << endl;
}

int main(void)
{
	float Num1, Num2;

	Read2Numbers(Num1, Num2);
	PrintResult(calculateRectangleArea(Num1, Num2));

	return 0;
}

// PRO solution same as mine

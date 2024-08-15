#include <iostream>
#include <math.h>
using namespace std;

/** Problem:
Write a program to ask the user to enter:
• Number
Then Print the Number^2 , Number^3 , Number^4
Example Inputs:
3
Outputs
9
27
81
 */

// My solution

int getNum()
{
	int Number;

	cout << "Please enter the number?" << endl;
	cin >> Number;

	return Number;
}

int getUp2(int Number)
{
	return Number * Number;
}

int getUp3(int Number)
{
	return Number * Number * Number;
}

int getUp4(int Number)
{
	return Number * Number * Number * Number;
}

void printResult(int Number)
{
	cout << Number << endl;
}
int main()
{
	int Number = getNum();

	cout << "--------\n";
	printResult(getUp2(Number));
	printResult(getUp3(Number));
	printResult(getUp4(Number));
}

// PRO solution

#include <iostream>
using namespace std;

// Problem #1
// Write a program to print your name on screen.

// My solution

int main(void)
{
	cout << "My name is Ramzy" << endl;
}

// The PRO solution

void print_name(string name)
{
	cout << "Your name is: " << name << endl;
}
int main()
{
	print_name("Mohamed");

	return 0;
}

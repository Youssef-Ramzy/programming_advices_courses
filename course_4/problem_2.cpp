#include <iostream>
using namespace std;

// Problem #2
// Write a program to ask the use to enter his/her name and
// print it on screen.

// my solution

void print_name(string name)
{
	cout << "Your name is: " << name << endl;
}

string get_name(void)
{
	string name;

	cout << "Please enter your name: ";
	getline(cin, name);

	return (name);
}

int main(void)
{
	print_name(get_name());
}

// PRO solution was the same as mine

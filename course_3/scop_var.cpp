#include <iostream>
using namespace std;
int i = 400;

void my_func(void)
{
	int i = 299;

	cout << "The local var of my_func is: " << i << endl;
}

int main(void)
{
	int i = 10;

	cout << "The local var of main is: " << i << endl;
	my_func();
	::i = 400; // This is how you edit the golobal var
	cout << "The golobal var is: " << ::i << endl; // To accsess the golobal var use ::var_name
}

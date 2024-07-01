#include <iostream>
using namespace std;


void my_func()
{
	cout << "Hello, World!" << endl;
}

void show_ifo()
{
	cout << "-----------------" << "\n"
		 << "Name: Ramzy" << "\n"
		 << "Age: 19" << "\n"
		 << "Phone: 01092102837" << "\n"
		 << "------------------" << endl;
}

string str()
{
	return "This func is returns a string.";
}

int sum_func(int i, int j)
{
	return i + j;
}

void sum_pro(int i, int j)
{
	cout << (i + j) << endl;
}

int main(void)
{
	my_func();
	show_ifo();
	cout << str() << endl;
	int i, j;
	cout << "please enter the i, j value: ";
	cin >> i >> j;
	cout << sum_func(i, j) << endl;
	sum_pro(i, j);
}

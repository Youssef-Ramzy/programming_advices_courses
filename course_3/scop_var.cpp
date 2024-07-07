#include <iostream>
using namespace std;


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
}

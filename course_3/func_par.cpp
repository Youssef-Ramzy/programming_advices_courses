#include <iostream>
using namespace std;


void swap_func(int& i, int& j) // Send the var by refrence
{
	int f;
	f = i;
	i = j;
	j = f;
}

int main(void)
{
	int i = 1, j = 2;

	swap_func(i, j);
	cout << i << j << endl;
}

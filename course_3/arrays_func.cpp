#include <iostream>
using namespace std;


void read_array_data(float x[3])
{
	cout << "Please enter num1: ";
	cin >> x[0];
	cout << "Please enter num2: ";
	cin >> x[1];
	cout << "Please enter num3: ";
	cin >> x[2];
}

float calc_array_avg(float x[3])
{
	return ((x[0] + x[1] + x[2]) / 3);
}

void print_array_data(float x[3])
{
	cout << "Num1: " << x[0] << endl
		 << "Num2: " << x[1] << endl
		 << "Num3: " << x[2] << endl;
}

int main(void)
{
	float x[3];

	read_array_data(x);
	print_array_data(x);
	cout << "Array avrage is: " << calc_array_avg(x) << endl;
}

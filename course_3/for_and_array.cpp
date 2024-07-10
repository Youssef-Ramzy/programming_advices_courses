#include <iostream>
using namespace std;


void read_array_data(int arr_1[100], int& length)
{
	cout << "How many numbers you want to enter 1 ~ 100: ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		cout << "Please enter num " << i + 1 << endl;
		cin >> arr_1[i];
	}
}

void print_array_data(int arr_1[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Number [" << i + 1 << "] : " << arr_1[i] << endl;
	}
}

void calc_array_sum(int arr_1[100], int length, int& sum)
{
	for (int i = 0; i < length; i++)
	{
		sum += arr_1[i];
	}
}

void line(void)
{
	cout << "--------------------" << endl;
}

int main(void)
{
	int arr_1[100], length = 0;
	int sum = 0;

	line();
	read_array_data(arr_1, length);
	print_array_data(arr_1, length);
	line();
	calc_array_sum(arr_1, length, sum);
	cout << "Array sum is : " << sum << endl;
	line();
	cout << "Array avrage is: " << sum / length << endl;
	line();
}

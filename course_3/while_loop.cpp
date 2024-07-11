#include <iostream>
using namespace std;

int read_int_number_in_range(int from, int to)
{
	int number;

	cout << "Please a number between " << from << " and " << to << endl;
	cin >> number;

	while (number < from || number > to)
	{
		cout << "Wrong num, Please enter a valid number between "
			 << from << " and " << to << endl;
		cin >> number;
	}

	return (number);
}

int main(void)
{
	int num = read_int_number_in_range(18, 60);
	cout << "The number is: " << num << endl;
}

#include <iostream>
using namespace std;


int main(void)
{
	int num = 0, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter the num: ";
		cin >> num;
		if (num > 50)
		{
			cout << "The num is bigger than 50\n";
			continue;
		}
		sum += num;
	}
	cout << sum << endl;
}

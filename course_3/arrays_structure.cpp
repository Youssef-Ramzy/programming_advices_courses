#include <iostream>
#include <string>

using namespace std;

struct str_info
{
	string Name;
	int Age;
	string Phone;
};


int read_persons(str_info person[100], int& length)
{
	cout << "Please enter Persons number: ";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		printf("Person: %d\n", i + 1);
		cout << "Please enter the Name: ";
		cin >> person[i].Name;
		cout << "Please enter the Age: ";
		cin >> person[i].Age;
		cout << "Please enter the Phone: ";
		cin >> person[i].Phone;
		cout << "--------------------\n";
	}
	return length;
}

void print_persons(str_info person[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("Person: %d\n", i + 1);
		cout << "Name: " << person[i].Name << endl
			 << "Age: " << person[i].Age << endl
			 << "Phone: " << person[i].Phone << endl;
		cout << "--------------------\n";
	}
}

int main(void)
{
	str_info Person[100];
	int length = 0;

	read_persons(Person, length);
	print_persons(Person, length);
}

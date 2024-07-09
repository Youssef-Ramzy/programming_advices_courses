#include <iostream>
#include <string>

using namespace std;

struct str_info
{
	string Name;
	int Age;
	string Phone;
};


void read_info(str_info& Info)
{
	cout << "Please enter the Name: ";
	cin >> Info.Name;
	cout << "Please enter the Age: ";
	cin >> Info.Age;
	cout << "Please enter the Phone: ";
	cin >> Info.Phone;
}

void print_info(str_info& Info)
{
	cout << "Name: " << Info.Name << endl
		 << "Age: " << Info.Age << endl
		 << "Phone: " << Info.Phone << endl;
}

void read_persons_info(str_info Person[2])
{
	read_info(Person[0]);
	read_info(Person[1]);
}

void print_persons_info(str_info Person[2])
{
	print_info(Person[0]);
	print_info(Person[1]);
}

int main(void)
{
	str_info Person[2];

	read_persons_info(Person);
	print_persons_info(Person);
}

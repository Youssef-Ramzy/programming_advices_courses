#include <iostream>
using namespace std;


struct str_info
{
	string f_name;
	string l_name;
	int age;
	string phone;
};

void read_info(str_info &info)
{
	cout << "Enter your first name: ";
	cin >> info.f_name;
	cout << "Enter your last name: ";
	cin >> info.l_name;
	cout << "Enter your Age: ";
	cin >> info.age;
	cout << "Enter your phone num: ";
	cin >> info.phone;
}

void print_info(str_info info)
{
	cout << "First name: " << info.f_name << endl
		 << "last name: " << info.l_name << endl
		 << "Age: " << info.age << endl
		 << "Phone: " << info.phone << endl;
}

int main(void)
{
	str_info Person_1;
	read_info(Person_1);
	print_info(Person_1);
}

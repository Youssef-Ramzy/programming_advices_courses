#include <iostream>
using namespace std;


struct str_info
{
	string Name;
	int Age;
	string Phone;
};

void create_person(str_info Person[2])
{
	Person[0].Name = "Youssef Ramzy";
	Person[0].Age = 19;
	Person[0].Phone = "01092102837";

	Person[1].Name = "3bass Ramzy";
	Person[1].Age = 23;
	Person[1].Phone = "01027746531";
}

void print_person(str_info Person[2], int i)
{
	cout << "Name: " << Person[i].Name << endl
		 << "Age: " << Person[i].Age << endl
		 << "Phone: " << Person[i].Phone << endl;
}

void chiose_person(str_info Person[2])
{
	int i;

	cout << "Please enter the person num: ";
	cin >> i;
	if (i == 1)
	{
		print_person(Person, 0);
	}
	else
	{
		print_person(Person, 1);
	}
}

int main(void)
{
	str_info Person[2];

	create_person(Person);
	chiose_person(Person);
}

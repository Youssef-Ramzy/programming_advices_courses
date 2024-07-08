#include <iostream>
using namespace std;

struct str_info {
	string Name;
	int Age;
	string Phone;
};

// Prototype
void welcome_app(str_info Person[]);
void create_person(str_info Person[], int& choice);
void print_person(str_info Person[], int& choice);

int main(void)
{
	str_info Person[2];
	while(1)
	{
	welcome_app(Person);
	}
}

void welcome_app(str_info Person[])
{
	int choice;

	cout << "Welcom, to our program" << endl
		 << "Please choise a task" << endl
		 << "1-Create a Person." << endl
		 << "2-Print a Person." << endl;
	cin >> choice;
	if (choice == 1)
	{
		create_person(Person, choice);
	}
	else
	{
		print_person(Person, choice);
	}
}

void create_person(str_info Person[], int& choice)
{
	int i = 0; // Assuming we want to fill the first available slot

	cout << "Please enter the person details:" << endl;
	cout << "Name: ";
	cin.ignore(); // Ignore the newline character left by cout
	getline(cin, Person[i].Name);
	cout << "Age: ";
	cin >> Person[i].Age;
	cin.ignore();
	cout << "Phone: ";
	getline(cin, Person[i].Phone);

	cout << "Details saved successfully!" << endl;
}

void print_person(str_info Person[], int& choice)
{
	int i;
	cout << "Please enter the person number: ";
	cin >> i;
	if(i >= 0 && i < 2) { // Ensure valid index
		cout << "Name: " << Person[i].Name << endl
			 << "Age: " << Person[i].Age << endl
			 << "Phone: " << Person[i].Phone << endl;
	} else {
		cout << "Invalid person number entered." << endl;
	}
}

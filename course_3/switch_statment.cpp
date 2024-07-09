#include <iostream>
using namespace std;

enum en_country_choice {Egypt=1, Jorden=2, Quter=3, KSA=4};

int main(void)
{
	int c;
	en_country_choice Country;

	cout << "Please enter the num of your country?\n"
		 << "(1) Egypt\n(2) Jorden\n(3) Quter\n(4) KSA\n(5) Other\n"
		 << "Your choice: ";
	cin >> c;

	Country = (en_country_choice) c;

	switch (Country)
	{
	case Egypt:
		cout << "Your country is Egypt\n";
		break;
	case Jorden:
		cout << "Your country is Jorden\n";
		break;
	case Quter:
		cout << "Your country is Quter\n";
		break;
	case KSA:
		cout << "Your country is KSA\n";
		break;
	default:
		cout << "Your country is not in the database!!\n";
		break;
	}
}

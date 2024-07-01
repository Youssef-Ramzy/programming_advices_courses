#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string str_1 = "10", str_2 = "20";

	cout << str.length() << endl; // Get length
	cout << str[2] << str[15] << str[15] << endl; // Conctonate
	cout << str_1 + str_2 << endl; // Sum as strings
	cout << stoi(str_1) + stoi(str_2) << endl; // Sum as integers

	string full_name;
	getline(cin, full_name); // To get the full name with the space char
	cout << full_name << endl;
	
}

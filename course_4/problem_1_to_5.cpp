#include <iostream>
using namespace std;

// Problem #1
// Write a program to print your name on screen.

// My solution

// int main(void)
// {
// 	cout << "My name is Ramzy" << endl;
// }

// The PRO solution

// void print_name(string name)
// {
// 	cout << "Your name is: " << name << endl;
// }
// int main()
// {
// 	print_name("Mohamed");

// 	return 0;
// }

// ---------------------------------------------------------
// Problem #2
// Write a program to ask the use to enter his/her name and
// print it on screen.

// my solution

// string get_name(void)
// {
// 	string name;

// 	cout << "Please enter your name: ";
// 	getline(cin, name);

// 	return (name);
// }

// int main(void)
// {
// 	print_name(get_name());
// }

// PRO solution was the same as mine

// ---------------------------------------------------------
// Prloblem #3
// Write a program to ask the user to enter a number, then 
// Print “ODD” if its odd, Or “Even” if its even.

// My solution
// int get_num(int num)
// {
// 	cout << "Please enter the number: ";
// 	cin >> num;

// 	return (num);
// }

// void check_num(int num)
// {
// 	if ((num % 2) == 0)
// 		cout << "The number: " << num << " is Even" << endl;
// 	else
// 		cout << "The number: " << num << " is ODD" << endl;
// }

// int main(void)
// {
// 	int num;

// 	check_num(get_num(num));
// }

// The PRO solution

// enum enNumberType {Odd = 1, Even= 2};

// int ReadNumber(void)
// {
// 	int num;
// 	cout << "Please enter the number?" << endl;
// 	cin >> num;

// 	return (num);
// }

// enNumberType CheckNumberType(int num)
// {
// 	int Result = num % 2;

// 	if (Result == 0)
// 		return enNumberType::Even;
// 	else
// 		return enNumberType::Odd;
// }

// void PrintNumberType(enNumberType NumberType)
// {
// 	if (NumberType == Even)
// 		cout << "\n Number is Even. \n";
// 	else
// 		cout << "\n Number is Odd. \n";
	
// }

// int main()
// {
// 	PrintNumberType(CheckNumberType(ReadNumber()));

// 	return 0;
// }

// ---------------------------------------------------------
/***
 * Problem #4
Write a program to ask the user to enter his/her:
• Age
• Driver license
Then Print “Hired” if his\her age is grater than 21
and s/he has a driver license, otherwise Print “Rejected”
 */

// My solution
// enum enCheckStatus {Yes = 1, No = 0};
// int get_age(void)
// {
// 	int age;

// 	cout << "Please enter your Age: ";
// 	cin >> age;

// 	return (age);
// }

// enCheckStatus get_driver_licence(void)
// {
// 	string driver_licence;

// 	cout << "Are you have a driver licence?" << endl
// 		 << "Enter Yes or No" << endl;
// 	cin >> driver_licence;
// 	if (driver_licence == "Yes")
// 		return enCheckStatus::Yes;
// 	else
// 		return enCheckStatus::No;
// }

// void hired_check(int age, enCheckStatus driver_licence)
// {
// 	if (age > 21 && driver_licence == Yes)
// 	{
// 		cout << "You are Hird" << endl;
// 	}
// 	else
// 	{
// 		cout << "You are Rejected" << endl;
// 	}
// }

// int main(void)
// {
// 	int age = get_age(); // First, get the age
// 	enCheckStatus licence = get_driver_licence(); // Then, check for driver's licence
// 	hired_check(age, licence); // Finally, call hired_check with the obtained values
// }

// The PRO solution

struct stInfo
{
	int Age;
	bool HasDriverLincese;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your Age?" << endl;
	cin >> Info.Age;

	cout <<"Do you have a driver lincese?" << endl;
	cin >> Info.HasDriverLincese;

	return (Info);
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLincese);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired" << endl;
	else
		cout << "\n Rejected" << endl;
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}

// ---------------------------------------------------------
/**
 * Problem #5
Write a program to ask the user to enter his/her:
• Age
• Driver license
• Has Recommendation!
Then Print “Hired” if his\her age is grater than 21
and s/he has a driver license, otherwise Print “Rejected”
Or Hire him\her without conditions!
 */

// My solution
// enum enCheckStatus {Yes = 1, No = 0};
// int get_age(void)
// {
// 	int age;

// 	cout << "Please enter your Age: ";
// 	cin >> age;

// 	return (age);
// }

// enCheckStatus get_driver_licence(void)
// {
// 	string driver_licence;

// 	cout << "Are you have a driver licence?" << endl
// 		 << "Enter Yes or No" << endl;
// 	cin >> driver_licence;

// 	if (driver_licence == "Yes")
// 		return enCheckStatus::Yes;
// 	else
// 		return enCheckStatus::No;
// }

// enCheckStatus get_recommendation(void)
// {
// 	string recommendation;

// 	cout << "Are you have a recommendation?" << endl
// 		 << "Enter Yes or No" << endl;
// 	cin >> recommendation;

// 	if (recommendation == "Yes")
// 		return enCheckStatus::Yes;
// 	else
// 		return enCheckStatus::No;
// }

// void hired_check(int age, bool driver_licence, enCheckStatus recommendation)
// {
// 	if ((age > 21 && driver_licence == Yes) || recommendation == 1)
// 	{
// 		cout << "You are Hird" << endl;
// 	}
// 	else
// 	{
// 		cout << "You are Rejected" << endl;
// 	}
// }

// int main(void)
// {
// 	int age = get_age(); // First, get the age
// 	enCheckStatus licence = get_driver_licence(); // Then, check for driver's licence
// 	enCheckStatus recommendation = get_recommendation(); // Then, check for the recommendation
// 	hired_check(age, licence, recommendation); // Finally, call hired_check with the obtained values
// }

// The PRO solution

// struct stInfo
// {
// 	int Age;
// 	bool HasDriverLincese;
// 	bool HasRecommendation;
// };

// stInfo ReadInfo()
// {
// 	stInfo Info;

// 	cout << "Please enter your Age?" << endl;
// 	cin >> Info.Age;

// 	cout <<"Do you have a driver lincese?" << endl;
// 	cin >> Info.HasDriverLincese;

// 	cout <<"Do you have a recommendation?" << endl;
// 	cin >> Info.HasRecommendation;

// 	return (Info);
// }

// bool IsAccepted(stInfo Info)
// {
// 	return ((Info.Age > 21 && Info.HasDriverLincese) || Info.HasRecommendation);
// }

// void PrintResult(stInfo Info)
// {
// 	if (IsAccepted(Info))
// 		cout << "\n Hired" << endl;
// 	else
// 		cout << "\n Rejected" << endl;
// }

// int main()
// {
// 	PrintResult(ReadInfo());

// 	return 0;
// }

// ---------------------------------------------------------

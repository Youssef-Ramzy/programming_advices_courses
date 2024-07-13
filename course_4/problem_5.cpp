#include <iostream>
using namespace std;

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
enum enCheckStatus {Yes = 1, No = 0};
int get_age(void)
{
	int age;

	cout << "Please enter your Age: ";
	cin >> age;

	return (age);
}

enCheckStatus get_driver_licence(void)
{
	string driver_licence;

	cout << "Are you have a driver licence?" << endl
		 << "Enter Yes or No" << endl;
	cin >> driver_licence;

	if (driver_licence == "Yes")
		return enCheckStatus::Yes;
	else
		return enCheckStatus::No;
}

enCheckStatus get_recommendation(void)
{
	string recommendation;

	cout << "Are you have a recommendation?" << endl
		 << "Enter Yes or No" << endl;
	cin >> recommendation;

	if (recommendation == "Yes")
		return enCheckStatus::Yes;
	else
		return enCheckStatus::No;
}

void hired_check(int age, bool driver_licence, enCheckStatus recommendation)
{
	if ((age > 21 && driver_licence == Yes) || recommendation == 1)
	{
		cout << "You are Hird" << endl;
	}
	else
	{
		cout << "You are Rejected" << endl;
	}
}

int main(void)
{
	int age = get_age(); // First, get the age
	enCheckStatus licence = get_driver_licence(); // Then, check for driver's licence
	enCheckStatus recommendation = get_recommendation(); // Then, check for the recommendation
	hired_check(age, licence, recommendation); // Finally, call hired_check with the obtained values
}

// The PRO solution

struct stInfo
{
	int Age;
	bool HasDriverLincese;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your Age?" << endl;
	cin >> Info.Age;

	cout <<"Do you have a driver lincese?" << endl;
	cin >> Info.HasDriverLincese;

	cout <<"Do you have a recommendation?" << endl;
	cin >> Info.HasRecommendation;

	return (Info);
}

bool IsAccepted(stInfo Info)
{
	return ((Info.Age > 21 && Info.HasDriverLincese) || Info.HasRecommendation);
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

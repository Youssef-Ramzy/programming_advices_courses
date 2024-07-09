#include <iostream>
using namespace std;

enum en_screen_color {Red=1, Blue=2, Green=3, Yellow=4};


int main(void)
{
	cout << "Please Chose the number of your color?\n"
		 << "(1) Red\n(2) Blue\n(3) Green\n(4) Yello\n"
		 << "Your choice: ";

	int c;
	en_screen_color Color;

	cin >> c;
	Color = (en_screen_color) c;

	if (Color == Red)
	{
		system("color 4F");
	}
	else if (Color == Blue)
	{
		system("color 1F");
	}
	else if (Color == Green)
	{
		system("color 2F");
	}
	else if (Color == Yellow)
	{
		system("color 6F");
	}
	else
	{
		cout << "Please enter valid num?\n";
	}
}
